#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		int arr1[n1];
		int arr2[n2];
		int arr3[n3];
		std::vector<int> v;
		for(int i=0;i<n1;i++) cin>>arr1[i];
		for(int i=0;i<n1;i++) cin>>arr2[i];
		for(int i=0;i<n1;i++) cin>>arr3[i];
		int i=0,j=0;
		while(i<n1 && j<n2){
			if(arr1[i]==arr2[j]) {v.push_back(arr1[i]);i++;j++;}
			else if(arr1[i]>arr2[j]) j++;
			else i++;
		}
		int n4=v.size();
		std::vector<int> v2;
		i=0;
		j=0;
		while(i<n3 && j<n4){
			if(arr3[i]==v[j]) {v2.push_back(arr3[i]);i++;j++;}
			else if(arr3[i]>v[j]) j++;
			else i++;
		}
		if(v2.size()==0) cout<<"-1";
		else {for(i=0;i<v2.size();i++) cout<<v2[i]<<" ";}
		cout<<endl;
	}
	return 0;
}
