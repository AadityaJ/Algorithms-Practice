//http://www.geeksforgeeks.org/next-greater-element/
#include <stdio.h>
#define MAX_SIZE 1000
class stack
{
	int size;
	int array[MAX_SIZE];
public:
	stack(){size=-1;}
	void push(int);
	int pop();
	void display();
	bool isEmpty(){return size==-1;}
};
void stack::push(int item){
	if(size==MAX_SIZE){return;}
	array[++size]=item;
}
int stack::pop(){
	if(size==-1){return -1;}
	return array[size--];
}
void stack::display(){
	if(size==-1){printf("Stack underflow\n");return;}
	for(int i=0;i<=size;i++){
		printf("%d\t",array[i]);
	}
	printf("\n");
}
void printGreat(int *arr,int n){
	int next;
	stack st;
	st.push(arr[0]);
    printf("\n");
	for(int i=1;i<n;i++){
        next=arr[i];
        if(!st.isEmpty()){
			int a= st.pop();
			while(a<next){
				
			}
		}
	}
    while(!st.isEmpty()){
        printf("%d --> -1\n",st.pop());
    }

}
int main(int argc, char const *argv[]) {
	int arr[MAX_SIZE];
	int v;
	scanf("%d",&v);
	for(int i=0;i<v;i++)scanf("%d",&arr[i]);
	printGreat(arr,v);
	return 0;
}
