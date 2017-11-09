/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

/* Computes the diameter of binary tree with given root.  */
int f(Node *node,int &h){
    if(!node){
        return 0;
    }
    int lh=0;
    int rh=0;

    int lAns=f(node->left,lh);
    int rAns=f(node->right,rh);

    h=max(lh,rh)+1;
    return max(lh+rh+1,max(lAns,rAns));

}
int diameter(Node* node)
{
   // Your code here
   if(!node) return 0;
   int h=0;
   return f(node,h);
}
