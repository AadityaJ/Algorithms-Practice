#include <stdio.h>

#define MAX 5

class queue{
    int front;
    int rear;
    int q[MAX];
public: queue(){front=rear=0;}
    void enqueue(int);
    int dequeue();
    void display();
};
void queue::enqueue(int x){
    if(rear==MAX){printf("Queue full\n");return;}
    q[rear++]=x;
}
int queue::dequeue(){
    if(front==rear){printf("Queue empty\n");return -1;}
    return q[front++];
}
void queue::display(){
    if(front==rear){printf("Queue empty\n");return;}
    printf("\n");
    for(int i=front;i<rear;i++) printf("%d\t",q[i]);
    printf("\n");
}
int main(int argc, char const *argv[]) {
    queue qu;
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
