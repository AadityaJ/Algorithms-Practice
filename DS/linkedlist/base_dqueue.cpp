#include <stdio.h>

struct node{
    int info;
    node* next;
}
class ll{
    node *head;
    node *tail;
public:
    ll(){head=tail=0;}
    void insertBeg();
    void insertEnd();
    node* delBeg();
    node* delEnd();
    void printAll();
}






int main(int argc, char const *argv[]) {
    ll l;
    
    return 0;
}
