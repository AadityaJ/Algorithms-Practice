#include <stdio.h>
#define MAX_SIZE 1000
class stack
{
	int size;
	char arr[MAX_SIZE];
public:
	stack(){size=-1;}
	void push(char);
	char pop();
	void display();
    bool isEmpty();
};
bool stack::isEmpty(){return !size;}
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
// now reverse string
void reverse(){
    char str[MAX_SIZE];
    stack st;
    printf("Input string \n" );
    scanf("%s",str);
    int i;
    for(i=0;str[i]!='\0';i++){
        st.push(str[i]);
    }
    for(int x=0;x<i;x++){
        str[x]=st.pop();
    }
    printf("Reversed string is %s\n",str);
}

int main(int argc, char const *argv[]) {
    reverse();
    return 0;
}
