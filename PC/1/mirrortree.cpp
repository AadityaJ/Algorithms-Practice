/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

/* Should convert tree to its mirror */
void mirror(struct Node* node)
{
     // Your Code Here
    if(!node) return;
    if(!node->left) {node->left=node->right;node->right=NULL;mirror(node->left);}
    else if (!node->right){node->right=node->left;node->left=NULL;mirror(node->right);}
    else{
        Node *temp = new Node;
        temp=node->left;
        node->left=node->right;
        node->right=temp;
        //delete(temp);
        mirror(node->left);
        mirror(node->right);

    }

}
