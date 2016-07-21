#include <stdio.h>
#include <vector>
#include <queue>
#define MAX 100
using namespace std;
class graph{
    vector <int> g[MAX];
    int edge;
    int vertices;
public:
    graph(int edge,int vertices){this->edge=edge;this->vertices=vertices;}
    void insert();
    //void dfs;
    void bfs();
};
void graph::insert(){
    int a,b;
    //un-directed graphs
    for(int i=0;i<edge;i++){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
}
void graph::bfs(){
    queue <int> q;
    g[0]

}
int main(int argc, char const *argv[]) {
    int edges,vertices;
    scanf("%d %d",&edges,&vertices);
    graph G(edges,vertices);
    G.insert();

    return 0;
}
