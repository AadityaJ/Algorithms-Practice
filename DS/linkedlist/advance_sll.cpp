/* double ended queue based on linked list
*/
#include <stdio.h>

struct node{
    int info;
    node* next;
};
class ll{
public:
    node *head;
    node *tail;
    ll(){head=tail=NULL;}
    void insertBeg(int);
    void insertEnd(int);
    node* delBeg();
    node* delEnd();
    node* getHead(){return head;}
    void printAll();
    void searchEle(int);
    void invert();
    void invert_len(int);
    int lenList(node *curr,int len);
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
    while(p){
        r=p->next;
        p->next=q;
        q=p;
        p=r;
    }
    head=q;
}
void ll::invert_len(int len){
    if(!head){printf("Empty list\n");return;}
    node *p,*r,*q;
    // invert from 0 to len-1
    int count=len;
    q=NULL;
    p=head;
    while(count--){
        r=p->next;
        p->next=q;
        q=p;
        p=r;
    }
    head->next=p;
    head=q;
}
int ll::lenList(node *curr,int len){
    if(!curr) return len;
    curr=curr->next;
    return lenList(curr,len+1);
}
/*  Recursive > Iterative ... Shorts fired
int ll::lenList(node *curr,int len){
    len=0;
    while(curr){
    curr=curr->next;
    len++;
    }
    return len;
}
*/
int main(int argc, char const *argv[]) {
    ll l;
    node *temp;
    int menu=1;
    int x;
    while(menu){
        printf("1.insertBeg 2.insertEnd 3.delBeg 4.delEnd 5.printAll 6.searchEle 7.invert 8.lenList 9.invertLen 0.exit\n");
        scanf("%d",&menu);
        switch (menu) {
            case 1:scanf("%d",&x);l.insertBeg(x);break;
            case 2:scanf("%d",&x);l.insertEnd(x);break;
            case 3:temp=l.delBeg();(temp)?printf("Deleting :: %d\n",temp->info):printf(" ");break;
            case 4:temp=l.delEnd();(temp)?printf("Deleting :: %d\n",temp->info):printf(" ");break;
            case 5:l.printAll();break;
            case 6:scanf("%d",&x);l.searchEle(x);break;
            case 7:l.invert();break;
            case 8:x=l.lenList(l.getHead(),0);printf("Length is :: %d\n",x);break;
            case 9:scanf("%d",&x);l.invert_len(x);break;
        }
    }
    return 0;
}
