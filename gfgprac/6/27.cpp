#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
		int q,m;
		cin>>q>>m;
		int sum=0;
		for (int i = 0; i < m; i++) {
			int x;
			cin>>x;
			sum+=(q-x);
		}
		cout<<(sum+q)<<endl;
	return 0;
}
