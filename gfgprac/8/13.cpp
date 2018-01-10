#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(int argc, char const *argv[]){
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	map<int,bool> mp;
	for(int i=k;i<=d;i+=k) mp[i]=1;
	for(int i=l;i<=d;i+=l) mp[i]=1;
	for(int i=m;i<=d;i+=m) mp[i]=1;
	for(int i=n;i<=d;i+=n) mp[i]=1;
	cout<<mp.size()<<endl;
	return 0;
}
