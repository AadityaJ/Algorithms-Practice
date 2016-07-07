#include <bits/stdc++.h>
#define MAX 100
using namespace std;
// time to convert things into classes
class StackQueue{
private:
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
};

/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
     s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if(s1.empty()){printf("Queue empty\n");}
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();    // c++ stl of stack has top and pop differently .__Remember__
    }
    int x=s2.top();
    s2.pop();
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    return x;
}
int main(int argc, char const *argv[]) {
    StackQueue sq;
    int x;
    int menu=1;
    while(menu){
        printf("Input Menu 1.enqueue 2.dequeue 0.Exit\n");
        scanf("%d",&menu);
        switch (menu){
            case 1:scanf("%d",&x);sq.push(x);break;
            case 2:printf("%d\n",sq.pop());break;
        }
    }
    return 0;
}
