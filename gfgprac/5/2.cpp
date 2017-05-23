#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void init(int *hash){
	for(int i=0;i<26;i++) hash[i]=0;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int hash[26];
		int i;
		//for(i=0;i<26;i++) hash[i]=0;
		for(i=n.length();i>=1;i--){
			init(hash);
			for(int x=0;x<i;x++){
				hash[x-'a']++;
			}
			for(int x=i-1;x<=n.length();x++){
				hash[x-'a']=1;
			}
		}
	}
	return 0;
}
