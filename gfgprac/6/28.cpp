#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class TreeNode{
public:
	int data;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x){
		data=x;
		left=NULL;
		right=NULL;
	}
};
TreeNode *create(TreeNode *root,int x){
	if(!root){
		TreeNode *a=new TreeNode(x);
		root=a;
		return root;
	}
	if(root->data>x){
		root->left=create(root->left,x);
	}
	else root->right=create(root->right,x);
	return root;
}
void print(TreeNode *root){
	if(!root)return ;
	if(!root->left &&!root->right){cout<<root->data<<" ";}
	print(root->left);
	print(root->right);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int b;
		TreeNode *root=NULL;
		for(int i=0;i<n;i++){
			cin>>b;
			root=create(root, b);
		}
		print(root);
		cout<<endl;
	}
	return 0;
}
