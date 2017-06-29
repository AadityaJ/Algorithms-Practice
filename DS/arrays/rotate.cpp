#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int arr[n],a[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k,d;
    cin>>k>>d;
    int i=0,j=0;
    while(i<n){
        for(int count=0;i<n&&count<d;count++){
            a[j+i]=arr[(i+k)%d];
            i++;
        }
        j+=i;
    }
    for(int i=0;i<n;i++) cout<<a[i];
    return 0;
}
