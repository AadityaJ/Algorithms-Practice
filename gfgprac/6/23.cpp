#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		priority_queue<int,std::vector<int>,greater<int> >q;
		for(int i=0;i<n;i++) q.push(arr[i]);
		int s=0;
		while(q.size()!=1){
			int x=q.top();
			q.pop();
			int y=q.top();
			q.pop();
			q.push(x+y);
			s+=(x+y);
		}
		cout<<s<<endl;
	}
	return 0;
}
