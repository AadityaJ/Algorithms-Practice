#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
std::vector<int> v;
void print(){
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	cout<<endl;
}
void f(int i,int n){
	if(i==n){
		print();
		return ;
	}
	if(v[i]>(10-n+i)){
		//cout<<"AAAA"<<v[i]<<endl;
		v[i-1]++;
		//print();
		for(int j=i;j<n;j++) v[j]=v[j-1]+1;
		print();
		return ;
	}
	if(i!=0 && v[i]<=v[i-1]){
		v[i]=v[i-1]+1;
		f(i+1,n);
	}else{
		f(i+1,n);
	}
	return ;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		v.clear();
		int n;
		cin>>n;
		int k=n;
		while(k){
			v.push_back(k%10);
			k/=10;
		}
		v.push_back(0);
		reverse(v.begin(),v.end());
		f(0,v.size());

	}
	return 0;
}
