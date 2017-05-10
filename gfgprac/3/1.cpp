#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int i,int j){
	return i>j;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int o_x=0,e_x=0;
		int odd[n],eve[n];
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x%2) odd[o_x++]=x;
			else eve[e_x++]=x;
		}
		//o_x--;
		//e_x--;
		sort(odd,odd+o_x,compare);
		sort(eve,eve+e_x);
		for(int i=0;i<o_x;i++) cout<<odd[i]<<" ";
		for(int i=0;i<e_x;i++) cout<<eve[i]<<" ";
		cout<<endl;
	}
	return 0;
}
