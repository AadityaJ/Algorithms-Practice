#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct pt{
	int x,y;
};
bool isOver(pt l1,pt r1,pt l2,pt r2){
	if (l1.x > r2.x || l2.x > r1.x)
        return false;
 
    if (l1.y < r2.y || l2.y < r1.y)
        return false;
 
    return true;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		pt l1,r1,l2,r2;
		cin>>l1.x>>l1.y>>r1.x>>r1.y>>l2.x>>l2.y>>r2.x>>r2.y;
		cout<<isOver(l1,r1,l2,r2)<<endl;
	}
	return 0;
}
