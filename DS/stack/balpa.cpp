#include <stdio.h>
#define MAX_SIZE 1000
class stack
{
	int size;
	char array[MAX_SIZE];
public:
	stack(){size=-1;}
	void push(char);
	char pop();
	void display();
    bool isEmpty();
};
bool stack::isEmpty(){return size==-1;}
void stack::push(char item){
	if(size==MAX_SIZE){printf("Stack Overflow\n");return;}
	arr[++size]=item;
}
char stack::pop(){
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
bool isbal(char *str){
    stack st;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='('){
            st.push('(');
        }
        if(str[i]==')') st.pop();
    }
    return st.isEmpty();
}

int main(int argc, char const *argv[]) {
    printf("Inpur string\n");
    char str[MAX_SIZE];
    scanf("%s",str);
    if(isbal(str)) printf("Balanced\n");
    else printf("Not Balanced\n");
    return 0;
}
