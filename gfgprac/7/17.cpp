#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int row,col;
		cin>>row>>col;
		int mx_sz=0,index=0;
		for(int i=0;i<row;i++){
			int sz=0;
			for(int j=0;j<col;j++){
				bool v;
				cin>>v;
				if(v) sz++;
			}
			if(sz>mx_sz){mx_sz=sz;index=i;}
		}
		cout<<index<<endl;
	}
	return 0;
}
