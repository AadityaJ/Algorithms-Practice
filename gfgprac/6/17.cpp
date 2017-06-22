#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
void f(int *arr,int n){
	stack<int>st;
	st.push(arr[0]);
	for(int i=1;i<n;i++){
		while(!st.empty()&&arr[i]>st.top()){
			cout<<st.top()<<"---"<<arr[i]<<endl;
			st.pop();
		}
		st.push(arr[i]);
	}
	while(!st.empty()){
		cout<<st.top()<<"--- "<<"-1"<<endl;
		st.pop();
	}
	return ;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		f(arr,n);
		cout<<endl;
	}
	return 0;
}
