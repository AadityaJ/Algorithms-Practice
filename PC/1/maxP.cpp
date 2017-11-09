/*Complete the function below
Node is as follows
struct Node{
	int data;
	Node *left, *right;
};
*/
#include <bits/stdc++.h>
using namespace std;
int f(Node *root,int &mx){
    if(!root) return 0;
    int a=f(root->left,mx);
    int b=f(root->right,mx);

    mx=max(mx,a+b+root->data);
    return max(a,b)+root->data;
}
int maxPathSum(struct Node *root)
{
//add code here.
    if(!root) return 0;
    int mx=0;
    f(root,mx);
    return mx;
}
