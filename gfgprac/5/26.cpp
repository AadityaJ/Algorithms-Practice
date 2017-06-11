#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define NC 256
using namespace std;
void findLargestUniqueSubstring(char input[], char output[]){
	// Write your code here
    int curlen=1,mxlen=1,index=0,n=strlen(input),i;
    int visited[NC];
    for(i=0;i<NC;i++) visited[i]=-1;
    visited[input[0]]=0;
    for(i=1;i<n;i++){
        int prev_index=visited[input[i]];

        if(prev_index==-1 || i-curlen>prev_index) curlen++;
        else{
            if(curlen>mxlen){
                mxlen=curlen;
                index=i;
            }
            curlen=i-prev_index;
        }
        visited[input[i]]=i;
    }
    if(curlen>mxlen){
        mxlen=curlen;
        index=i;
    }
    //cout<<mxlen<<" "<<index;
	int itr=0;
	for(int x=(index-mxlen);x<index;x++){
		output[itr++]=input[x];
	}
	output[itr]='\0';
}
int main(int argc, char const *argv[]){
	int t=1;
	//cin>>t;
		char in[]="abcdefgh";
		char out[]="";
		findLargestUniqueSubstring(in,out);
		cout<<out<<endl;
	return 0;
}
