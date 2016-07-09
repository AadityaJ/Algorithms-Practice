/* double ended queue based on linked list
*/
#include <stdio.h>

struct node{
    int info;
    node* next;
};
class ll{
    node *head;
    node *tail;
public:
    ll(){head=tail=NULL;}
    void insertBeg(int);
    void insertEnd(int);
    node* delBeg();
    node* delEnd();
    void printAll();
};
void ll::insertBeg(int x){
    node *temp=new node;
    temp->info=x;
    if(!head &&!tail){
        head=temp;tail=temp;
    }else{
    temp->next=head;
    head=temp;
    }
}
void ll::insertEnd(int x){
    node *temp=new node;
    temp->info=x;
    if(!head && !temp){
        head=tail=temp;
    }else{
    tail->next=temp;
    temp->next=NULL;
  }
}
node* ll::delBeg(){
    node *temp=new node;
    if(!head &&!tail){
        // empty linked list
        printf("Empty linked list\n");
        return head;
    }
    temp=head;
    head=head->next;
    return temp;
}
node* ll::delEnd(){
    if(!head &&!tail){
        // empty linked list
        printf("Empty linked list\n");
        return 0;
    }
    node *curr=head;
    while(curr->next==tail){
        curr=curr->next;
    }
    node *temp=new node;
    temp=tail;
    tail=curr;
    return temp;
}
void ll::printAll(){
    if(!head && !tail){
        printf("Empty Linked List\n");return;
    }printf("\n");
    for(node *curr=head;curr;curr=curr->next){
        printf("%d\t",curr->info);
    }
    printf("\n");
}



int main(int argc, char const *argv[]) {
    ll l;
    node *temp;
    int menu=1;
    int x;
    while(menu){
        printf("1.insertBeg 2.insertEnd 3.delBeg 4.delEnd 5.printAll 0.exit\n");
        scanf("%d",&menu);
        switch (menu) {
            case 1:scanf("%d",&x);l.insertBeg(x);break;
            case 2:scanf("%d",&x);l.insertEnd(x);break;
            case 3:temp=l.delBeg();printf("%d\n",temp->info);break;
            case 4:temp=l.delEnd();printf("%d\n",temp->info);break;
            case 5:l.printAll();break;
        }
    }
    return 0;
}
