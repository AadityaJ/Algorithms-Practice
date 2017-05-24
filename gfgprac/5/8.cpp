#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int calc(string s)
{
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	for (int i=0; i<s.size(); i++){
		if (s[i] == 'a')
			aCount = (1 + 2 * aCount);
		else if (s[i] == 'b')
			bCount = (aCount + 2 * bCount);
		else if (s[i] == 'c')
			cCount = (bCount + 2 * cCount);
	}
	return cCount;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<calc(str)<<endl;
	}
	return 0;
}
//http://practice.geeksforgeeks.org/problems/count-subsequences-of-type-ai-bj-ck/0
