#include <stdio.h>

class node{
    int info;
    node* next;
public:
    void insertBeg(int);
    void insertEnd(int);
    int delBeg();
    int delEnd();
    void printAll();
};
node *head=NULL;
node *tail=NULL;
void node::insertBeg(int x){
    node *temp=new node;
    temp->info=x;
    temp->next=NULL;
    if(!head && !tail) {head=tail=temp;return;}
    temp->next=head;
    head=temp;
    delete(temp);
}
void node::insertEnd(int x){
    node *temp=new node;
    temp->info=x;
    temp->next=NULL;
    if(!head && !tail) {head=tail=temp;return;}
    tail->next=temp;
    tail=temp;
}
int node::delBeg(){
    node *temp=new node;
    if(!head &&!tail){
        // empty linked list
        printf("Empty linked list\n");
        return -1;
    }
    temp=head;
    head=head->next;
    return temp->info;
}
int node::delEnd(){
    if(!head &&!tail){
        // empty linked list
        printf("Empty linked list\n");
        return -1;
    }
    node *curr=head;
    while(curr->next==tail){
        curr=curr->next;
    }
    node *temp=new node;
    temp=tail;
    tail=curr;
    return temp->info;
}
void node::printAll(){
    if(!head && !tail){
        printf("Empty Linked List\n");return;
    }printf("\n");
    for(node *curr=head;curr;curr=curr->next){
        printf("%d\t",curr->info);
    }
    printf("\n");
}
int main(int argc, char const *argv[]) {
    node n;
    int temp;
    int menu=1;
    int x;
    while(menu){
        printf("1.insertBeg 2.insertEnd 3.delBeg 4.delEnd 5.printAll 0.exit\n");
        scanf("%d",&menu);
        switch (menu) {
            case 1:scanf("%d",&x);n.insertBeg(x);break;
            case 2:scanf("%d",&x);n.insertEnd(x);break;
            case 3:temp=n.delBeg();printf("%d\n",temp);break;
            case 4:temp=n.delEnd();printf("%d\n",temp);break;
            case 5:n.printAll();break;
        }
    }
    return 0;
}
