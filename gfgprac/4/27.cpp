#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void rec(string str,int i,string ans){
	if(i==str.length()){
		if(ans[0]!=' ') cout<<"("<<ans<<")";
		return ;
	}

	string n=ans;
	n.insert(i," ");
	cout<<n<<endl;
	rec(str,i+2,n);
	rec(str,i+1,ans);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		string ans="";
		rec(str,1,str);
		cout<<endl;
	}
	return 0;
}
