#include <bits/stdc++.h>
using namespace std;
int findTrailingZeros(long long int  n)
{
    // Initialize result
    int count = 0;

    // Keep dividing n by powers of 5 and update count
    for (int i=5; n/i>=1; i *= 5)
          count += n/i;

    return count;
}
int main(){
	vector<long long int> v;
    long long int n;
    int m;
    cin>>n>>m;
	long long i=1;
	bool is=0;
    for(i=1;i<n;i++){
		if(findTrailingZeros(i)==m){is=1;break;}
	}
	if(is){
		if(i+2<n) cout<<i+2<<endl;
		if(i+1<n) cout<<i+1<<endl;
		if(i<n) cout<<i<<endl;
		if(i+3<n) cout<<i+3<<endl;
		if(i+4<n) cout<<i+4<<endl;
	}

	return 0;
}
