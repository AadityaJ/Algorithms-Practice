#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int getN(int x){
	int ans=0;
	while(x){
		ans+=(x&1);
		x>>=1;
	}
	return ans;
}
int main(int argc, char const *argv[]){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	map<int,long long> mp;
	for(int i=0;i<n;i++){
		mp[getN(arr[i])]++;
	}
	long long ans=0;
	map<int,long long>::iterator it;
	for(it=mp.begin();it!=mp.end();it++){
		long long x=it->second;
		ans+=(x*(x-1))/2;
	}
	cout<<ans<<endl;
	return 0;
}
