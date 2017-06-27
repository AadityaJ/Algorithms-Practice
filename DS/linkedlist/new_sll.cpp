#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int data,Node *next){
        this->data=data;
        this->next=next;
    }
    Node(Node *temp){
        this->data=temp->data;
        this->next=temp->next;
    }
};
class SLL{
    Node *head;
    Node *tail;

public:
    SLL(){
        head=tail=NULL;
    }
    Node *getHead(){return this->head;}
    void push_back(int x){
        Node *temp=new Node(x,NULL);
        if(!head && !tail){
            head=temp;tail=temp;
            return ;
        }
        tail->next=temp;
        tail=temp;
        return ;
    }
    void push_front(int x){
        Node *temp=new Node(x,head);
        if(!head && !tail){
            head=temp;tail=temp;
            return ;
        }
        head=temp;
        return ;
    };
    void print(){
        Node *curr=head;
        while(curr!=tail->next){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
        return ;
    }
    int pop_back(){
        if(!head &&!tail) return -1;
        if(head==tail){
            int x=head->data;
            head=tail=0;
            return x;
        }
        Node *temp=new Node(tail);
        int x=temp->data;
        Node *curr=head;
        while(curr->next!=tail){
            curr=curr->next;
        }
        curr->next=0;
        tail=curr;
        delete temp;
        return x;
    }
    int pop_front(){
        if(!head) return -1;
        if(head==tail){
            int x=head->data;
            head=tail=0;
            return x;
        }
        Node *temp=new Node(head);
        head=head->next;
        int x=temp->data;
        delete temp;
        return x;
    }
    void enter_mid(int val,int pos){
        if(pos==0){this->push_front(val);return;}

        int x=pos;
        Node *curr=head;
        while(x--!=1){
            curr=curr->next;
        }
        if(!curr->next){this->push_back(val);return ;}
        Node *temp=new Node(val,curr->next);

        curr->next=temp;
        return;
    }
    int get_mid(int pos){
        if(pos==0){return head->data;}

        int x=pos;
        Node *curr=head;
        while(curr&&x--){
            curr=curr->next;
        }
        if(!curr) return -1;
        return curr->data;
    }
    void del_mid(int pos){
        if(pos==0){this->pop_front();return;}

        int x=pos;
        Node *curr=head;
        while(curr&&x--!=1){
            curr=curr->next;
        }
        if(!curr) return ;
        if(!curr->next) {curr->next=NULL;tail=curr;return;}
        Node *temp=new Node(curr->next);
        curr->next=(curr->next)->next;
        delete temp;
        return ;
    }
    int find(int val,Node *t,int pos=0){
        if(t==NULL) return -1;
        if(t->data==val) return pos;

        return find(val,t->next,pos+1);
    }
};
void test1(){
    cout<<"**********TEST 1**********\n";
    SLL obj;
    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(3);
    obj.push_front(10);
    obj.push_front(20);
    obj.print();
    cout<<obj.pop_back()<<" ";
    cout<<obj.pop_back()<<" ";
    cout<<obj.pop_back()<<" ";
    cout<<obj.pop_front()<<" ";
}
void test2(){
    cout<<"\n**********TEST 2**********\n";
    SLL obj;
    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(3);
    obj.push_front(10);
    obj.push_front(20);
    obj.print();
    obj.enter_mid(20,5);
    obj.print();
    cout<<obj.get_mid(5)<<endl;
    obj.del_mid(0);
    obj.print();
}
void test3(){
    cout<<"\n**********TEST 3**********\n";
    SLL obj;
    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(3);
    obj.push_front(10);
    obj.push_front(20);
    obj.print();
    cout<<obj.find(10,obj.getHead())<<endl;
    cout<<obj.find(100,obj.getHead())<<endl;
    cout<<obj.find(2,obj.getHead())<<endl;
}
int main(int argc, char const *argv[]) {
    test1();
    test2();
    test3();
    return 0;
}
