#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		char str[2001];
		cin>>str;
		stack <string> st;
		char *ptr;
		ptr=strtok(str,".");
		while(ptr){
			st.push(ptr);
			ptr=strtok(NULL,".");
		}
		while(!st.empty()){
			cout<<st.top();
			if(st.size()!=1) cout<<".";
			st.pop();
		}
		cout<<endl;
	}
	return 0;
}
// strtok :: learn and weird
