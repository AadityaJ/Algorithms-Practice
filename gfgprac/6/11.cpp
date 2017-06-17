#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

// A simple method to evaluate Euler Totient Function
int phi(unsigned int n)
{
    unsigned int result = 1;
    for (int i=2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}
int main(int argc, char const *argv[]){
		int n,q,m;
		cin>>n>>q>>m;
		int arr[n+1];
		for(int i=1;i<=n;i++) cin>>arr[i];
		for(int i=0;i<q;i++){
			int a,b;
			cin>>a>>b;
			int ans=0;
			for(int x=a;x<=b;x++){
				for(int y=a;y<=b;y++){
					if(arr[x]==arr[y])
					ans=max(ans,(y-x));
				}
			}
			cout<<phi(ans)<<endl;
		}
	return 0;
}
