/* Tree node class
struct Node
{
    int data;
    Node *left, *right;
}; */

// Method that prints the bottom view.
#include <bits/stdc++.h>
using namespace std;
void bottomView(Node *root)
{
   // Your Code Here
    if(!root) return ;

    map<int,int> mp;
    queue<pair<int, Node*> > q;
    q.push(make_pair(0,root));
    while(!q.empty()){
        pair<int,Node*> x=q.front();
        mp[x.first]=(x.second)->data;
        if(x.second->left) q.push(make_pair(x.first-1,x.second->left));
        if(x.second->right) q.push(make_pair(x.first+1,x.second->right));
        q.pop();
    }
    map<int,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->second<<" ";
    }
}
