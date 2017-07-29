#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int c3(int i){
	if(i>2){return (i*(i-1)*(i-2))/6;}
	return 0;
}
int c2(int i){
	if(i>1){return (i*(i-1))/2;}
	return 0;
}
int f(int *arr,int n){
	int x=0,y=0,z=0;
	for(int i=0;i<n;i++){
		if(arr[i]%3==0) x++;
		if(arr[i]%3==1) y++;
		if(arr[i]%3==2) z++;
	}
	//cout<<x<<" "<<y<<" "<<z<<endl;
	int sum=0;
	sum+=c3(x)+c3(y)+c3(z)+(x*y*z);
	//cout<<sum<<" ";
	sum+=c2(x)+(z*y);
	return sum;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<f(arr,n)<<endl;
	}
	return 0;
}
