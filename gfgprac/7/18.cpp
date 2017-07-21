#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector<int> v;
		int a=n;
		while(a){
			v.push_back(a%10);
			a/=10;
		}
		bool is=0;
		if(v.size()<3){
			while(v.size()!=3){v.push_back(0);}
		}
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v.size();j++){
				if(i==j) continue;
				for(int k=0;k<v.size();k++){
					if(i==k || j==k) continue;
					int x=(v[i]*100)+(v[j]*10)+v[k];
					if(x%8==0){
						is=1;break;
					}
				}
			}
		}
		if(is)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
// relax and think about the problem
