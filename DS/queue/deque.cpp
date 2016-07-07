//http://quiz.geeksforgeeks.org/deque-set-1-introduction-applications/
#include <stdio.h>

#define MAX 10

class dequeue{
    int front,rear;
    int size;
    int arr[MAX];
public:
    dequeue(){front=rear=size=0;}
    void insertFront(int);
    void insertBack(int);
    void deleteFront();
    void deleteBack();
    int Front();
    int Back();
    void display();
};
void dequeue::insertFront(int x){
    if(size==MAX){printf("Storage Full\n");return;}
    if(!front) front=MAX-1;
    else front--;
    size++;
    arr[front]=x;
}
void dequeue::insertBack(int x){
    if(size==MAX){printf("Storage Full\n");return;}
    arr[rear]=x;
    size++;
    rear=(rear+1)%MAX;
}
void dequeue::deleteFront(){
    if(size==0){printf("Storage Empty\n");return;}
    size--;
    front=(front+1)%MAX;
    //i guess thats it
}
void dequeue::deleteBack(){
    if(size==0){printf("Storage Empty\n");return;}
    size--;
    rear=(rear-1)%MAX;
}
int dequeue::Front(){
    if(size==0){printf("Empty\n");return -1;}
    return arr[front];
}
int dequeue::Back(){
    if(size==0){printf("Empty\n");return -1;}
    return arr[rear];
}
void dequeue::display(){
    if(size==0){printf("Storage empty");}
    int temp=front;
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[temp]);
        temp=(temp+1)%MAX;
    }
    printf("\n");
}
int main(int argc, char const *argv[]) {
    dequeue d;
    int menu=1;
    int item;
    while(menu){
        printf("\nInput Menu 1.enqueue_f 2.enqueue_b 3.dequeue_f 4.dequeue_b 5.front 6.back 7.display 0.exit ");
        scanf("%d",&menu);
        switch (menu) {
            case 1: scanf("%d",&item);d.insertFront(item);break;
            case 2: scanf("%d",&item);d.insertBack(item);break;
            case 3: d.deleteFront();break;
            case 4: d.deleteBack();break;
            case 5: printf("%d\n",d.Front());break;
            case 6: printf("%d\n",d.Back());break;
            case 7: d.display();break;
        }
    }
    return 0;
}
