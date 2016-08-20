#include <iostream>
using namespace std;
int dp[2001][2001];
void init(){
    for(int i=0;i<2001;i++){
        for(int j=0;j<2001;j++)
            dp[i][j]=-1;
    }
}
int lca(int *arr1,int *arr2,int size1,int size2,int i,int j){
    if(i==size1 || j==size2) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(arr1[i]==arr2[j]) return dp[i][j]=1+lca(arr1,arr2,size1,size2,i+1,j+1);

    return dp[i][j]=max(lca(arr1,arr2,size1,size2,i+1,j),lca(arr1,arr2,size1,size2,i,j+1));
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int x=0,y=0;
        int arr1[2010],arr2[2010];
        int max=0;
        while(1){
            cin>>arr1[x++;]
            if(!arr1[x-1]){x--;break;}
        }
        
    }
    int arr1[]={1,2,3,4,5,6,7,8,9};
    int arr2[]={1,3,1,5,7,8,9,3,4};
    init();
    cout<<lca(arr1,arr2,9,9,0,0)<<endl;
    return 0;
}
