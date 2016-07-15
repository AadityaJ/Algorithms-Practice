#include <stdio.h>

struct node{
    int data;
    node *lcl;
    node *rcl;
};
class tree{
    node *root;
public:
    node *getRoot(){return root;}  //getRoot!=groot
    void inorder(node *);
    void postorder(node *);
    void preorder(node*);
    void createTree(int ,char*);
};
void tree::createTree(int x,char *str){
    node *temp=new node;
    temp->data=x;
    if(!root){root=temp;return;}
    node *curr,*prev;
    curr=root;
    int i=0;
    while(str[i]!='\0'&& curr){
        if(str[i]=='l'){prev=curr;curr=curr->lcl;}
        else{prev=curr;curr=curr->rcl;}
    }
    if(!curr){printf("Erronus inputs. Aborted ..\n");return;}
    if(str[i-1]=='l')prev->lcl=temp;
    else prev->rcl=temp;
}
void tree::inorder(node *rt){
    if(!rt){return;}
    inorder(rt->lcl);
    printf("%d ",rt->data);
    inorder(rt->rcl);
}
void tree::preorder(node *rt){
    if(!rt){return;}
    printf("%d ",rt->data);
    preorder(rt->lcl);
    preorder(rt->rcl);
}
void tree::postorder(node *rt){
    if(!rt){return;}
    postorder(rt->lcl);
    postorder(rt->rcl);
    printf("%d ",rt->data);
}
int main(int argc, char const *argv[]) {
    tree l;
    node *temp;
    int menu=1;
    int x;
    char str[100];  // practically now tree is bounded by string length 100
                    // think about it "ll....l" 100 times is depth of 100
                    // which means a max tree size of 2^100 -1 which is pretty large
    while(menu){
        printf("1.insert 2.preorder 3.inorder 4.postorder 0.exit\n");
        scanf("%d",&menu);
        switch (menu) {
            case 1:scanf("%d",&x);scanf("%s",str);l.createTree(x,str);break;
            case 2:l.preorder(l.getRoot());break;
            case 3:l.inorder(l.getRoot());break;
            case 4:l.postorder(l.getRoot());break;
        }
    }
    return 0;
}
