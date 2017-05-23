#include <bits/stdc++.h>
using namespace std;
double point(double low,double high,int n,double m[]){

    double mid=(high+low)/2;
    double epsilon=0.0000000000001;
    double force=0;
    for(int j=0;j<n;j++){
    if(mid>m[j]){
         force+=1.0/(mid-m[j]);}
         else if(mid<m[j]){
             force-=1.0/(m[j]-mid);
         }
    }
    if(force>(-epsilon) && force<(epsilon)){
        return mid;}
        else if(force>0){
            return point(mid,high,n,m);}
            else if(force<0){
            return point(low,mid,n,m);
            }

}


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    double m[n];
	    for(int i=0;i<n;i++){
	        cin>>m[i];
	    }
	    double res;
	    for(int i=0;i<n-1;i++){
	        res=point(m[i],m[i+1],n,m);
	        cout<<fixed;
	        cout<<setprecision(2)<<res<<" ";
	    }
    cout<<endl;
	}
	return 0;
}
