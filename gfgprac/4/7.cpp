#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		pair<int,int> mp;
		int n,m,p;
		cin>>n>>m>>p;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++) cin>>arr1[i];
		for(int i=0;i<m;i++) cin>>arr2[i];
		std::vector<pair<int,int> > v;
		sort(arr1,arr1+n);
		sort(arr2,arr2+m);
		/*
		//int x=0;
		int i=0,j=m-1;

		while(i<(n-1)&&j>=0){
			if(arr1[i]+arr2[j]==p){int a=arr1[i];int b=arr2[j];v.push_back(make_pair(a,b));i++;j--;}
			else if(arr1[i]+arr2[j]<p){i++;}
			else j--;
		}
		i=n-1;
		j=0;
		while(i>=0&&j<n-1){
			if(arr1[i]+arr2[j]==p){int a=arr1[i];int b=arr2[j];v.push_back(make_pair(a,b));i--;j++;}
			else if(arr1[i]+arr2[j]<p){i--;}
			else j++;
		}*/
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr1[i]+arr2[j]==p){
					int a=arr1[i];int b=arr2[j];v.push_back(make_pair(a,b));
				}
			}
		}
		if(v.size()==0) cout<<"-1";
		for(int i=0;i<v.size();i++){
			if(i==v.size()-1){
				cout<<v[i].first<<" "<<v[i].second;
			}
			else cout<<v[i].first<<" "<<v[i].second<<", ";
		}
		cout<<endl;
	}
	return 0;
}
