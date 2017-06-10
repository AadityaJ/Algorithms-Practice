#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 1000
using namespace std;
bool myComp(int a,int b){
	string sa=to_string(a);
	string sb=to_string(b);
	string ab=sa.append(sb);
	string ba=sb.append(sa);
	return (ab>ba);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n,myComp);
		for(int i=0;i<n;i++) cout<<arr[i];
		cout<<endl;
	}
	return 0;
}

//learning when in doubt have faith in compare function and strings X)
