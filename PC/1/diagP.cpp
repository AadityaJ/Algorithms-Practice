/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Complete the function below
Node is as follows:
struct Node{
	int data;
	Node *left,*right;
};
*/
#include <bits/stdc++.h>
using namespace std;
void f(Node *root,map<int,int>&mp,int lft){
    if(!root) return ;
    mp[lft]=(mp[lft]+root->data);
    f(root->left,mp,lft+1);
    f(root->right,mp,lft);
}
void diagonalSum(Node* root)
{
 // Add your code here
    if(!root) return ;
    map<int,int> mp;
    f(root,mp,0);
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->second<<" ";
    }
    cout<<endl;
}
