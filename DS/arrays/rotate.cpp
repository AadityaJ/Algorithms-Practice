#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0 || b == 0)
       return 0;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
void leftRotate(int arr[], int d, int n)
{
  int i, j, k, temp;
  int x=gcd(d,n);
  for (i = 0; i < x; i++)
  {
    temp = arr[i];
    j = i;
    while(1)
    {
      k = j + d;
      if (k >= n)
        k = k - n;
      if (k == i)
        break;
      arr[j] = arr[k];
      j = k;
    }
    arr[j] = temp;
  }
}
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int arr[n],a[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k,d;
    cin>>k>>d;
    leftRotate(arr,d,k);
    for(int i=0;i<n;i++) cout<<arr[i];
    return 0;
}
