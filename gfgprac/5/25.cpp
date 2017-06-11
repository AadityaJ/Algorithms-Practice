#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
void reverseStringWordWise(char input[]) {
    // Write your code here
    int n = strlen(input);
    string str="";
    string ans="";
    stack<string> st;
    for(int i=0;i<n;i++){
        if(input[i]==' '|| i==n-1){
			if(i==n-1){str.push_back(input[i]);}
            st.push(str);
            str="";
        }
        else{
            str.push_back(input[i]);
        }
    }
    while(!st.empty()){
        ans+=st.top();
        ans+=" ";
        st.pop();
    }
    for(int i=0;i<(ans.length()-1);i++){
        input[i]=ans[i];
    }
}
int main(int argc, char const *argv[]){
	int t=1;
	//cin>>t;
	while(t--){
		char c[]="hello world";
		reverseStringWordWise(c);
		cout<<c<<endl;
	}
	return 0;
}
