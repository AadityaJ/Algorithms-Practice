#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int a){
        this->data=a;
        this->left=NULL;
        this->right=NULL;
    }
};
class BST{
    Node *root;
    int size;
    Node* __insert__(Node *root,int a){
        if(!root){
            root=new Node(a);
            return root;
        }
        if(a<root->data){
            root->left=__insert__(root->left,a);
        }else{
            root->right=__insert__(root->right,a);
        }
        return root;
    }
    void __inorder__(Node *root){
        if(!root) return ;
        __inorder__(root->left);
        cout<<root->data<<" ";
        __inorder__(root->right);
    }
public:
    BST(){
        this->root=NULL;
        this->size=0;
    }
    BST(Node *root){
        this->root=root;
        this->size=1;
    }
    void insert(int a){
        this->root=__insert__(this->root,a);
    }
    void inorder(){
        __inorder__(this->root);
    }
};
