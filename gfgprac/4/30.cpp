#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct pt{
	int x,y;
};
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		bool ans=0;
		pt pt1,pt2,pt3,py4;
		cin>>pt1.x>>pt1.y>>pt2.x>>pt2.y;
		cin>>pt3.x>>pt3.y>>pt4.x>>pt4.y;
		int min_x=min(pt1.x,pt2.x);
		int max_x=max(pt1.x,pt2.x);
		int min_y=min(pt1.y,pt2.y);
		int max_y=max(pt1.y,pt2.y);
	}
	return 0;
}
