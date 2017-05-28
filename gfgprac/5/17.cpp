#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
		int j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		if(i%2) cout<<(a[i/2]+a[i/2+1])/2<<endl;
		else cout<<a[i/2]<<endl;
	}
	return 0;
}
