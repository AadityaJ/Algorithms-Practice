#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int edit(string str1,string str2){
	if(str1.length()==0) return str2.length();
	if(str2.length()==0) return str1.length();
	int edit[str1.length()][str2.length()];
	for(int i=0;i<str1.length();i++){
		edit[i][0]=i;
	}
	for(int i=0;i<str2.length();i++){
		edit[0][i]=i;
	}
	for(int i=1;i<str1.length();i++){
		for(int j=1;j<str2.length();j++){
			if(str1[i-1]==str2[j-1]) edit[i][j]=edit[i-1][j-1];
			else edit[i][j]=1+min(edit[i-1][j],edit[i][j-1]);
		}
	}
	return edit[str1.length()-1][str2.length()-1];

}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		int n;
		cin>>n;
		//cout<<edit(str,str1)<<endl;
		string dict[n];
		for(int i=0;i<n;i++) cin>>dict[i];
		cin>>str;
		//int arr[n];
		//for(int i=0;i<n;i++) arr[i]=0;
		int mi=INT_MAX,pos=0;
		for(int i=0;i<n;i++){
			int a=edit(str,dict[i]);
			if(a<mi){mi=a;pos=i;}
		}
		cout<<dict[pos]<<endl;
	}
	return 0;
}
