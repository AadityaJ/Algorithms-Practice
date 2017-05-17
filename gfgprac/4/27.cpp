#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void printPatternUtil(char str[], char buff[], int i, int j, int n)
{
    if (i==n)
    {
        buff[j] = '\0';
        cout <<"("<<buff << ")";
        return;
    }
    buff[j] = str[i];
    printPatternUtil(str, buff, i+1, j+1, n);

    buff[j] = ' ';
    buff[j+1] = str[i];

    printPatternUtil(str, buff, i+1, j+2, n);
}
void printPattern(char *str)
{
    int n = strlen(str);
    char buf[2*n];
    buf[0] = str[0];

    printPatternUtil(str, buf, 1, 1, n);
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		char str[100];
		cin>>str;
		printPattern(str);
		cout<<endl;
	}
	return 0;
}
