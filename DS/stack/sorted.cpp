//http://www.geeksforgeeks.org/sort-a-stack-using-recursion/
#include <stdio.h>
#define MAX_SIZE 1000
class stack
{
	int size;
	int arr[MAX_SIZE];
public:
	stack(){size=-1;}
	void push(int);
	int pop();
	void display();
    bool isEmpty();
    int top();
}s;
int stack::top(){return arr[size];}
bool stack::isEmpty(){
    return size==-1;
}
void stack::push(int item){
	if(size==MAX_SIZE){printf("Stack Overflow\n");return;}
	arr[++size]=item;
}
int stack::pop(){
	if(size==-1){printf("Stack underflow\n");return -1;}
	return arr[size--];
}
void stack::display(){
	if(size==-1){printf("Stack underflow\n");return;}
	for(int i=0;i<=size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void insert_sorted(int x){
    if((s.isEmpty())||(x>s.top())){
        s.push(x);
        return ;
    }
    int temp=s.pop();
    insert_sorted(temp);
    s.push(temp);
}
void break_stack(){
    if(!s.isEmpty()){
        int x = s.pop();
        break_stack();
        insert_sorted(x);
    }
}
int main(int argc, char const *argv[]) {
    int menu=1;
	int val;
	while(menu){
		printf("Input menu :: 1.push 2.pop 3.display 4.Sort 0.exit\n");
		scanf("%d",&menu);
		switch(menu){
			case 1: scanf("%d",&val);
					s.push(val);
					break;
			case 2: printf("%d\n",s.pop());
					break;
			case 3: s.display();
					break;
            case 4: break_stack();break;


		}
	}
    return 0;
}
