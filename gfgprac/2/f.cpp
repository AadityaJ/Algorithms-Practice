#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool arr[1001];
void init(){
	for(int i=0;i<1001;i++) arr[i]=0;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		//init();
		int n,pr;
		cin>>n>>pr;
		int ax[n];
		bool is=0;
		for(int i=0;i<n;i++) cin>>ax[i];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(ax[i]*ax[j]==pr){is=1;break;}
			}
		}
		(is)?(cout<<"Yes\n"):(cout<<"No\n");
	}
	return 0;
}
