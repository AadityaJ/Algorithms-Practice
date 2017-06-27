#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int data,Node *next){
        this->data=data;
        this->next=next;
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
            delete temp;
            return ;
        }
        tail->next=temp;
        tail=temp;
        delete temp;
        return ;
    }
    void push_front(int x){
        Node *temp=new Node(x,head);
        if(!head && !tail){
            head=temp;tail=temp;
            delete temp;
            return ;
        }
        head=temp;
        delete temp;
        return ;
    }
    void print(){
        Node *curr=head;
        while(curr){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        return ;
    }
};
int main(int argc, char const *argv[]) {
    SLL obj;
    obj.push_back(1);
    obj.push_back(2);
    obj.print();
    obj.push_back(3);
    obj.push_front(10);
    //obj.print();
    return 0;
}
