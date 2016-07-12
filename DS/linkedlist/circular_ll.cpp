/* circular linked list
*/
#include <stdio.h>

struct node{
    int info;
    node* next;
};
class c_ll{
    node *head;
public:
    c_ll(){head=NULL;}
    void insertBeg(int);
    void insertEnd(int);
    node* delBeg();
    node* delEnd();
    void printAll();
    node *split();
    void makeHead(node* head){this->head=head;}
};
void c_ll::insertBeg(int x){
    node *temp=new node;
    temp->info=x;
    if(!head){
        head=temp;head->next=head;return;
    }
    if((head->next)==head){
        head->next=temp;
        temp->next=head;
        head=temp;
        return;
    }
    // REACH END AND CHANGE LOOP
    node *curr=head;
    while(curr->next!=head){curr=curr->next;}
    curr->next=temp;
    temp->next=head;
    head=temp;
}
void c_ll::insertEnd(int x){
    node *temp=new node;
    temp->info=x;
    if(!head){
        head=temp;head->next=head;return;
    }
    if(head->next==head){
        head->next=temp;
        temp->next=head;
        return;
    }
    node *curr=head;
    while(curr->next!=head){curr=curr->next;}
    curr->next=temp;
    temp->next=head;

}
node* c_ll::delBeg(){
    node *temp=new node;
    if(!head){
        // empty linked list
        printf("Empty linked list\n");
        return head;
    }
    if(head->next==head){
        temp=head;
        head=NULL;
        return temp;
    }
    // find end first
    node *curr=head;
    while(curr->next!=head){curr=curr->next;}
    curr->next=head->next;
    temp=head;
    head=head->next;
    return(temp);
}
node* c_ll::delEnd(){
    node *temp=new node;
    if(!head){
        // empty linked list
        printf("Empty linked list\n");
        return head;
    }
    if(head->next==head){
        temp=head;
        head=NULL;
        return temp;
    }
    node *curr=head;
    //find last but one end first
    while((curr->next)->next!=head){
        curr=curr->next;
    }
    temp=curr->next;
    curr->next=head;
    return temp;
}
void c_ll::printAll(){
    if(!head){
        printf("Empty Linked List\n");return;
    }printf("\n");
    node *curr=head;
    do{
        printf("%d\t",curr->info);
        curr=curr->next;
    }while(curr!=head);

    printf("\n");
}
node* c_ll::split(){
    if(!head || head->next==head){printf("Not possible\n");return head;}
    node *hare,*tort;
    hare=tort=head;
    while((hare->next)!=head || (hare->next)->next!=head){
        tort=tort->next;
        hare=(hare->next)->next;
    }
    node *prev=NULL;
    if((hare->next)->next==head){hare=hare->next;}
    node *head2;
    head2=tort->next;
    hare->next=head2;
    tort->next=head;
    return head2;
}


int main(int argc, char const *argv[]) {
    c_ll l;
    c_ll ot;
    node *temp;
    int menu=1;
    int x;
    while(menu){
        printf("1.insertBeg 2.insertEnd 3.delBeg 4.delEnd 5.printAll 6.split 0.exit\n");
        scanf("%d",&menu);
        switch (menu) {
            case 1:scanf("%d",&x);l.insertBeg(x);break;
            case 2:scanf("%d",&x);l.insertEnd(x);break;
            case 3:temp=l.delBeg();(temp)?printf("Deleting :: %d\n",temp->info):printf(" ");break;
            case 4:temp=l.delEnd();(temp)?printf("Deleting :: %d\n",temp->info):printf(" ");break;
            case 5:l.printAll();break;
            case 6:temp=l.split();ot.makeHead(temp);ot.printAll();break;
        }
    }
    return 0;
}
