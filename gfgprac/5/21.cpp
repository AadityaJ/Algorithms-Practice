#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){cout<<"1\n";continue;}
		string ans="1";
		for(int i=2;i<=n;i++){
			ans+='$';
			string temp="";
			int cnt=1;
			for(int j=1;j<ans.length();j++){
				if(ans[j]!=ans[j-1]){
					temp+=(cnt+'0');
					temp+=(ans[j-1]);
					cnt=1;
				}
				else cnt++;
			}
			ans=temp;
		}
		cout<<ans<<endl;
	}
	return 0;
}
