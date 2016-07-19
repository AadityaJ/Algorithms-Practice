#include <stdio.h>
#include <map>
using namespace std;
bool isSub(int *arr1,int n,int *arr2,int m){
    map<int,int> count;
    for(int i=0;i<n;i++) count[arr1[i]]++;
    for(int i=0;i<m;i++){
        if(count.find(arr2[i])==count.end()) return false;
        count[arr2[i]]--;
        if(!count[arr2[i]]) count.erase(arr2[i]);
    }

    return true;
}
int main(int argc, char const *argv[]) {
    int arr1[]={1,2,3,4,5,6,7,8};
    int arrSub[]={3,4,5,11};
    if(isSub(arr1,7,arrSub,4)){
        printf("Is subset\n");
    }
    else printf("Not subset\n");
    return 0;
}
