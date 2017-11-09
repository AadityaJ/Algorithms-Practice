/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Structure of the Node of the binary tree is as
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
*/
// function should return the root of the new binary tree formed
#include <stack>
struct Node *constructTree(int n, int pre[], char preLN[])
{
    // Code here
    Node * head=0, * current=0;
    stack<Node *> st;

    head = new Node();
    //head-> data = pre[0];
    current = head;
    if (n == 1) {
        head->left = 0;
        head->right=0;
        return head;
    }

    for(int i=0;i<n;i++){
        current->data = pre[i];
        if(preLN[i] == 'N'){
            st.push(current);
            current->left = new Node();
            current = current ->left;
        }
        else{
            current -> left = 0;
            current -> right = 0;
            if ( i != n-1 ){
                current = st.top();
                st.pop();
                current -> right = new Node();
                current = current->right;
            }
        }
    }

    return head;
}
