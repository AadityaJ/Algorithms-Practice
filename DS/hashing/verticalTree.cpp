#include <stdio.h>
#include <map>
#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

struct Node* newNode(int key)
{
    struct Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return node;
}
void createMap(node *rt,map<int,std::vector<int> >&m,hd){
    if(!rt) return ;
    m[hd].push_back(rt->key);
    printVerticalOrder(rt->left,m,hd-1);
    printVerticalOrder(rt->right,m,hd+1);
}

void printVerticalOrder(node *rt){
    if(!rt) return ;
    map<int,std::vector<int> >m;
    int hd=0;
    createMap(rt,m,hd);

    map<int,std::vector<int> >::iterator it;
    for(it=m.begin(),it!=m.end();it++){
        for(int i=0;i<it->second.size();i++){
            printf("%d ",it->second[i]);
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[]) {
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
    cout << "Vertical order traversal is \n";
    printVerticalOrder(root);

    return 0;
}
