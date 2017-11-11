/*Complete the function below
Node is as follows:
struct Node{
int data;
Node *left,*right;
};
*/
#include <bits/stdc++.h>
using namespace std;
map<int,int>mp;
void f(Node *root,int level,int l){
    if(!root) return ;
    mp[level]=root->data;
    f(root->left,mp,level-1,l+1);
    f(root->right,mp,level+1,l+1);
}
void printVertical(Node *root)
{
//add code here.
mp.clear();
    if(!root) return ;
    map<int,int> mp;
    f(root,mp,0);
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->second<<" ";
    }
}
