#include <stdio.h>
#include <queue>
using namespace std;

struct node{
    int data;
    node *lcl;
    node *rcl;
    bool rchild;    //1 if parent is successor
};
class tbt{
    node *root;
public:

};

int main(int argc, char const *argv[]) {
    tbt l;
    node *temp;
    int menu=1;
    int x;
    while(menu){
        printf("\n1.insert 2.preorder 3.inorder 4.postorder 5.levelorder 6.calcHeight 7.CalcDiam 8.morrisInorder 0.exit\n");
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
        }
    }
    return 0;
}
