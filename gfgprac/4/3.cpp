#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		 string temp;
		 vector<string> v;
		 for(i=0;i<n;i++)
		 {
			 cin>>temp;
			 v.push_back(temp);
		 }
		 map<string,int> m;
		 vector<int> final;
		 int count=0;
		 for(i=0;i<n;i++)
		 {
			 if(m.find(v[i])==m.end())
			 {
				 m[v[i]]=1;
				 //if(v[i].find('1')!=string::npos)
				 for(j=0;j<v[i].length();j++)
				 {
					 if(v[i][j]=='1')
					   break;
				 }
				 if(j<n)
				 count++;
				 //final.push_back(i);
			 }
		 }
		 for(i=0;i<count;i++)
		 {
			 cout<<i<<" ";
			 //cout<<final[i]<<" ";
		 }
		 if(count==0)
		   cout<<-1;
		 cout<<"\n";
	 }
	}
	return 0;
}
