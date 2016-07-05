#include <stdio.h>

#define MAX_SIZE 1000
class stack
 {
 	int size;
 	char arr[MAX_SIZE];
 public:
 	stack(){
 		size=-1;}
 	void push(char);
 	char pop();
 	bool isEmpty(){return !size;}
 };
 void stack::push(char a){
 	if(size==MAX_SIZE){printf("Stack overflow\n");return;}
 	arr[++size]=a;
 }
 char stack::pop(){
 	if(size==-1){printf("Stack underflow\n");return -1;}
 	return arr[size--];
 }
 int prec(char a){
     switch(a){
         case '/':
         case '*':return 3;
         case '+':
         case '-':return 2;
         case '(':return 1;
         default: return 0;
     }
 }
 void contopfix(){
	stack st;
	int p=0;
    int precd;
	char infix[1000];
    char pfix[1000];
	char a,b;
	printf("Print infix expression\n");
	scanf("%s",infix);
	for(int i=0;infix[i]!='\0';i++){
        a=infix[i];
        switch(a){
			case '(':st.push(a);break;
			case ')':b=st.pop();
                     while(b!=')'){
                         pfix[p++]=b;
                         b=st.pop();
                     }
                     break;
            case '+':
            case '-':
            case '*':
            case '/':
                     if(!st.isEmpty()){
                         precd=prec(a);
                         b=st.pop();
                         while(precd<=prec(b)){
                             pfix[p++]=b;
                             if(!st.isEmpty()){
                                 b=st.pop();
                             }
                             else break;
                         }
                         if(precd>prec(b)) st.push(b);
                     }
                     st.push(a);
                     break;
            default:pfix[p++]=a;break;
		}
	}
    while(!st.isEmpty()){
        pfix[p++]=st.pop();
    }
    pfix[p]='\0';
    printf("%s\n",pfix);
}
 int main(int argc, char const *argv[])
 {
    contopfix();
 	return 0;
 }
