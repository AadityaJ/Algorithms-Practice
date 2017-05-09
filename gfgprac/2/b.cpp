#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct pr
{
	int x,y;
};
int dist(pr a,pr b){
	return sqrt(((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y)));
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		bool is=1;
		pr a,b,c,d;
		cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>d.x>>d.y;
		int ab=dist(a,b);
		int bc=dist(b,c);
		int cd=dist(c,d);
		int da=dist(d,a);
		if(!(ab==bc && ab==cd &&ab==da &&bc==cd &&bc==da&&cd==da)) is=0;
		int m1=(a.y-b.y)/(a.x-b.x);
		int m2=(a.y-d.y)/(a.x-d.x);
		if(m1*m2!=(-1)) is=0;
		cout<<is<<endl;
	}

	return 0;
}
