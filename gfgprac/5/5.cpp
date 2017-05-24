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
		int n,k;
		cin>>k>>n;
		int arr[n];
		int minK=100001;
		queue<int> q;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(i<k) {
				minK=min(minK,arr[i]);
				q.enqueue(arr[i]);
				cout<<-1<<" ";
			}
			else{
				q.enqueue(arr[i]);
				int x=q.top();
				q.pop();
				if(x==minK){
					for(int i=0;i<k;i++){
						if()
					}
				}
			}
		}
	}
	return 0;
}
