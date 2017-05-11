#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue <string> st;
		string str="1";
		st.push(str);
		for(int i=1;i<=n;i++){
			str=st.front();
			cout<<str<<" ";
			//cout<<(str+"0")<<" ";
			st.pop();
			st.push(str+"0");
			st.push(str+"1");
		}//cout<<st.size()<<endl;
		cout<<endl;
	}
	return 0;
}
