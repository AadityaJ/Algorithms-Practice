#include <stdio.h>

#define MAX 5

class c_queue{
    int front;
    int rear;
    int size;
    int q[MAX];
public: c_queue(){size=front=rear=0;}
    void enqueue(int);
    int dequeue();
    void display();
};
void c_queue::enqueue(int x){
    if(size==MAX){printf("Queue full\n");return;}
    //q[rear++]=x;
    q[rear]=x;
    rear=(rear+1)%MAX;
    size++;
}
int c_queue::dequeue(){
    if(!size){printf("Queue empty\n");return -1;}
    int temp=q[front];
    front=(front+1)%MAX;
    size--;
    return temp;
}
void c_queue::display(){
    if(!size){printf("Queue empty\n");return;}
    printf("\n");
    int temp=front;
    for(int i=0;i<size;i++) {printf("%d\t",q[temp]);temp=(temp+1)%MAX;}
    printf("\n");
}
int main(int argc, char const *argv[]) {
    c_queue qu;
    int sw=1;
    int x;
    while(sw){
        printf("Select Menu :: 1.enqueue 2.dequeue 3.display 0.exit\n");
        scanf("%d",&sw);
        switch(sw){
            case 1: scanf("%d",&x);qu.enqueue(x);break;
            case 2: printf("%d\n",qu.dequeue());break;
            case 3:qu.display();break;
        }
    }
    return 0;
}
