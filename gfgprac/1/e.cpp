#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int arr[11];
		for(int i=0;i<10;i++) cin>>arr[i];
		for(int i=0;i<10;i++){
			int px=0;
			for(int j=i+1;j<10;j++){
				if(arr[i]==arr[j]) px++;
			}//cout<<px<<endl;
			if(px==4) {cout<<arr[i]<<endl;break;}
		}
	}
	return 0;
}
// 10:00