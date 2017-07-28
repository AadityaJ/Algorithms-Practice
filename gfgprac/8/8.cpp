#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int c=1;
		queue<int>q;
		q.push(1);
		while(c<=n){
			int x=q.front();
			q.push(x*2);
			q.push(x*3);
			q.push(x*5);
			q.pop();
			c++;
		}
		cout<<q.front()<<endl;
	}
	return 0;
}
