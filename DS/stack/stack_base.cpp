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
};
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
int main(int argc, char const *argv[])
{
	int menu=1;
	int val;
	stack st;
	while(menu){
		printf("Input menu :: 1.push 2.pop 3.display 0.exit\n");
		scanf("%d",&menu);
		switch(menu){
			case 1: scanf("%d",&val);
					st.push(val);
					break;
			case 2: printf("%d\n",st.pop());
					break;
			case 3: st.display();
					break;
			

		}
	}
	return 0;
}