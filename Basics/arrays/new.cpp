#include <stdio.h>
#include <stack>
using namespace std;
class interval{
public:
    int start;
    int end;
};
int main(int argc, char const *argv[]) {
    int t;
    scanf("%d",&t);
    while(t--){
        stack <interval> s;
        int n;
        scanf("%d",&n);
        interval i[n];
        for(int i=0;i<n;i++){
            scanf("%d %d",&interval[i].start,&interval[i].end);
        }
        s.push(interval[0]);
        while(!s.isEmpty()){
            
        }
    }
    return 0;
}
