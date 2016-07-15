#include <stdio.h>
#include <queue>
using namespace std;
struct node{
    int data;
    node *lcl;
    node *rcl;
};
class bst_tree{
    node *root;
public:
    node *getRoot(){return root;}  //getRoot!=groot
    void inorder(node *);
    void postorder(node *);
    void preorder(node*);
    void createTree(int);
    void levelorder();
};
void bst_tree::createTree(int x){
    node *temp=new node;
    temp->data=x;
    if(!root){root=temp;return;}
    node *curr,*prev;
    curr=root;
    while(curr){
        prev=curr;
        if(curr->data>x){curr=curr->lcl;}
        else curr=curr->rcl;
    }
    if(prev->data>x) prev->lcl=temp;
    else prev->rcl=temp;
}
void bst_tree::inorder(node *rt){
    if(!rt){return;}
    inorder(rt->lcl);
    printf("%d ",rt->data);
    inorder(rt->rcl);
}
void bst_tree::preorder(node *rt){
    if(!rt){return;}
    printf("%d ",rt->data);
    preorder(rt->lcl);
    preorder(rt->rcl);
}
void bst_tree::postorder(node *rt){
    if(!rt){return;}
    postorder(rt->lcl);
    postorder(rt->rcl);
    printf("%d ",rt->data);
}
void bst_tree::levelorder(){
    queue <node*> q;
    node *curr=root;
    node *temp;
    q.push(curr);
    while(!q.empty()){
        curr=q.front();
        q.pop();
        printf("%d ",curr->data);
        if(curr->lcl)q.push(curr->lcl);
        if(curr->rcl)q.push(curr->rcl);

    }
}
int main(int argc, char const *argv[]) {
    bst_tree l;
    node *temp;
    int menu=1;
    int x;
    while(menu){
        printf("\n1.insert 2.preorder 3.inorder 4.postorder 5.levelorder 0.exit\n");
        scanf("%d",&menu);
        switch (menu) {
            case 1:scanf("%d",&x);l.createTree(x);break;
            case 2:l.preorder(l.getRoot());break;
            case 3:l.inorder(l.getRoot());break;
            case 4:l.postorder(l.getRoot());break;
            case 5:l.levelorder();break;
        }
    }
    return 0;
}
