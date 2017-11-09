/*Complete the function below
Node is as follows:
struct Node{
int data;
Node *left,*right;
};
*/
#include <bits/stdc++.h>
using namespace std;
void f(Node *root,map<int,int>&mp,int level){
    if(!root) return ;
    mp[level]+=root->data;
    f(root->left,mp,level-1);
    f(root->right,mp,level+1);
}
void printVertical(Node *root)
{
//add code here.
    if(!root) return ;
    map<int,int> mp;
    f(root,mp,0);
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->second<<" ";
    }
}
