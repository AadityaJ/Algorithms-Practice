#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int rec(int N){
	for (int i = 0; i < 2 * N - 1; i++) {
        int k = i < N ? i : 2 * (N - 1) - i; 
        for (int j = 0; j < k; j++)
            cout << N - j;
        for (int j = 0; j < 2 * (N - k) - 1; j++)
            cout << N - k;
        for (int j = k - 1; j >= 0; j--)
            cout << N - j;
		cout << endl;
    }
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		rec(n);
	}
	return 0;
}
