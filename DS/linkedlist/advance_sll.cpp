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
    void searchEle(int);
    void invert();
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
        return head;
    }
    node *curr=head;
    while(curr->next!=tail){
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
void ll::searchEle(int x){
    int pos=0,count=0;
    node *temp = head;
    for(;temp;temp=temp->next){
        if(temp->info==x){count++;printf("At pos %d\n",pos+1);}
        pos++;
    }
    if(!count){printf("Not found\n");}
}
void ll::invert(){
    if(!head) {printf("Empty list\n");return;}
    node *p,*r,*q;
    q=NULL;
    p=head;
    r=p->next;
    while(p){
        p->next=q;
        q=p;
        p=r;
        r=r->next;
    }
    head=q;
}

int main(int argc, char const *argv[]) {
    ll l;
    node *temp;
    int menu=1;
    int x;
    while(menu){
        printf("1.insertBeg 2.insertEnd 3.delBeg 4.delEnd 5.printAll 6.searchEle 7.invert 0.exit\n");
        scanf("%d",&menu);
        switch (menu) {
            case 1:scanf("%d",&x);l.insertBeg(x);break;
            case 2:scanf("%d",&x);l.insertEnd(x);break;
            case 3:temp=l.delBeg();(temp)?printf("Deleting :: %d\n",temp->info):printf(" ");break;
            case 4:temp=l.delEnd();(temp)?printf("Deleting :: %d\n",temp->info):printf(" ");break;
            case 5:l.printAll();break;
            case 6:scanf("%d",&x);l.searchEle(x);break;
            case 7:l.invert();break;
        }
    }
    return 0;
}
