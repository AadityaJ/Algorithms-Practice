#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int chmp[26];
void init(){
	for(int i=0;i<26;i++) chmp[i]=0;
}
void calcFreq(string str){
	for(int i=0;i<str.length();i++){
		chmp[str[i]-'a']++;
	}
}
int calc(string str,int k){
	if(str.length()<=k) return 0;
	priority_queue<int> pq;
	for(int i=0;i<26;i++){
		//cout<<i+'a'<<" "<<chmp[i]<<endl;
		pq.push(chmp[i]);
	}
	for(int i=0;i<k;i++){
		int x=pq.top();
		pq.pop();
		x--;
		pq.push(x);
	}
	int val=0;
	while(!pq.empty()){
		int x=pq.top();
		pq.pop();
		val+=(x*x);
	}
	return val;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		init();
		string str;
		cin>>str;
		calcFreq(str);
		int k;
		cin>>k;
		cout<<calc(str,k)<<endl;

	}
	return 0;
}
