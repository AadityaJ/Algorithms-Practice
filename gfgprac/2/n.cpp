#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int map[20];
void init(){
	for(int i=0;i<10;i++) map[i]=0;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			init();
			int x=i;
			bool is=1;
			while(x){
				int j=(x%10);
				if(map[j]==1) {is=0;break;}
				map[j]=1;
				x/=10;
			}
			if(is) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
