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
};
void test1(){
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
    cout<<endl;
    obj.print();
}
int main(int argc, char const *argv[]) {
    test1();
    return 0;
}
