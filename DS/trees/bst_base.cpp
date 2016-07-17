#include <stdio.h>
#include <queue>
using namespace std;

inline int max(int a,int b){
    return (a>b)?a:b;
}
struct node{
    int data;
    node *lcl;
    node *rcl;
};
class bst_tree{
    node *root;
public:
    node *getRoot(){return root;}  //<poor joke> getRoot!=groot </poor joke>
    void inorder(node *);
    void postorder(node *);
    void preorder(node*);
    void createTree(int);
    void levelorder();
    int calcHeight(node *);
    int badCalcDiam(node *);
    int calcDiam(node *,int *);
    void morrisInorder();
    node *cloneTree(node *rt);
    bool printAnces(node *,int);
    int findLowesAnces(node*,int,int);
};
bool bst_tree::printAnces(node *rt,int x){
    if(!rt)return 0;
    if(rt->data==x) return 1;
    if(printAnces(rt->lcl,x)||printAnces(rt->rcl,x)) {printf("%d ",rt->data);return 1;}
    return 0;
}
node *bst_tree::cloneTree(node *rt){
    if(!rt){return rt;}
    node *r = rt;
    r->lcl=cloneTree(rt->lcl);
    r->rcl=cloneTree(rt->rcl);
    return r;
}
void bst_tree::morrisInorder(){
    if(!root) return;
    node *curr=root;
    while(curr){
        if(!curr->lcl){
            printf("%d ",curr->data);
            curr=curr->rcl;
        }
        else{
            node *pre=curr->lcl;
            while(pre->rcl && pre->rcl!=curr) pre=pre->rcl;
            if(!pre->rcl){
                pre->rcl=curr;
                curr=curr->lcl;
            }
            else{
                pre->rcl=NULL;
                printf("%d ",curr->data);
                curr=curr->rcl;
            }
        }
    }
}
int bst_tree::calcDiam(node *rt,int *ht){
    if(!rt){*ht=0;return 0;}

    int lh=0,rh=0;

    int ldiam=0,rdiam=0;

    ldiam=calcDiam(rt->lcl,&lh);
    rdiam=calcDiam(rt->rcl,&rh);

    return max(1+lh+rh,max(ldiam,rdiam));

}
int bst_tree::badCalcDiam(node *rt){
    if(!rt)return 0;

    int lheight=calcHeight(rt->lcl);
    int rheight=calcHeight(rt->rcl);

    int ldiam=badCalcDiam(rt->lcl);
    int rdiam=badCalcDiam(rt->rcl);

    return max(lheight+rheight+1,max(ldiam,rdiam));
}
int bst_tree::calcHeight(node *rt){
    if(!rt) return 0;

    return 1+max(calcHeight(rt->lcl),calcHeight(rt->rcl));
}
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
int bst_tree::findLowesAnces(node *rt,int a,int b){
    if(!rt)return -1;
    if(rt->data>a&&rt->data>b){
        return findLowesAnces(rt->lcl,a,b);
    }
    if(rt->data<a&&rt->data<b){
        return findLowesAnces(rt->rcl,a,b);
    }
    return root->data;
}
int main(int argc, char const *argv[]) {
    bst_tree l;
    node* temp;
    int menu=1;
    int x,y;
    while(menu){
        printf("\n1.insert 2.preorder 3.inorder 4.postorder 5.levelorder 6.calcHeight 7.CalcDiam 8.morrisInorder 9.createTree 10.printAnces  11.findLowesAnces 0.exit\n");
        scanf("%d",&menu);
        switch (menu) {
            case 1:scanf("%d",&x);l.createTree(x);break;
            case 2:l.preorder(l.getRoot());break;
            case 3:l.inorder(l.getRoot());break;
            case 4:l.postorder(l.getRoot());break;
            case 5:l.levelorder();break;
            case 6:printf("%d\n",l.calcHeight(l.getRoot()));break;
            case 7:printf("%d\n",l.badCalcDiam(l.getRoot()));break;
            case 8:l.morrisInorder();break;
            case 9:temp=l.cloneTree(l.getRoot());l.inorder(temp);break;
            case 10:scanf("%d",&x);if(!l.printAnces(l.getRoot(),x)){printf("Not found\n");};break;
            case 11:scanf("%d %d",&x,&y);printf("%d\n",l.findLowesAnces(l.getRoot(),x,y));break;
        }
    }
    return 0;
}
