#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool isInt(float x){
	return (ceilf(x)==x)&&(floorf(x)==x);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		//cout<<log10(m)<<endl;
		double x=log10(m)/n;
		//cout<<x<<endl;
		double ans=pow(10,x);
		//cout<<ans<<endl;
		//cout<<(ceilf(ans))<<endl;
		(isInt(ans))?(cout<<ans<<endl):(cout<<"-1"<<endl);
	}
	return 0;
}
