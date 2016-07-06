//http://www.geeksforgeeks.org/the-stock-span-problem/
#include <bits/stdc++.h>
using namespace std;
int *stock_span(int *arr,int n){
    stack<int> s;
    s.push(0);
    int S[8];
    S[0]=1;
    for(int i=1;i<n;i++){
        while(!s.empty() && arr[s.top()]<=arr[i]) s.pop();
        S[i]=(s.empty())?(i+1):(i-s.top());
        s.push(i);
    }
    return S;
}
int main(int argc, char const *argv[]) {
    int arr[]={100,80,60,70,60,75,85};
    int *s;
    s=stock_span(arr,7);
    for(int i=0;i<7;i++) printf("%d \t",*(s+i));
    return 0;
}
