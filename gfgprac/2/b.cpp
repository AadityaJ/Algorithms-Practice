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
bool isSq(pr a,pr b,pr c,pr d){
	int ab=dist(a,b);
	int bc=dist(b,c);
	int cd=dist(c,d);
	int da=dist(d,a);
	//cout<<ab<<" "<<bc<<" "<<cd<<" "<<da;
	if(!(ab==bc && ab==cd &&ab==da &&bc==cd &&bc==da&&cd==da)) {return 0;}
	int db=dist(d,b);
	int ca=dist(c,a);
	if(db!=ca) {return 0;}
	return 1;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		bool is=1;
		pr a,b,c,d;
		cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>d.x>>d.y;	
		if(isSq(a,b,c,d)||isSq(a,b,d,c)||isSq(a,c,b,d)) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}

	return 0;
}
