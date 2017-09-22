#include "bts.h"

int main(int argc, char const *argv[]) {
    BST b;
    b.insert(10);
    b.insert(30);
    b.insert(20);
    b.inorder();
    return 0;
}
