#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int min1=INT_MAX,min2=INT_MAX,x=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x<min1){
				min2=min1;
				min1=x;
			}
			else if(x<min2 && x!=min1){
				min2=x;
			}
		}
		if(min1==INT_MAX || min2==INT_MAX) cout<<"-1"<<endl;
		else cout<<min1<<" "<<min2<<endl;
	}
	return 0;
}
