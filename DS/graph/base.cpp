#include <stdio.h>
#include <list>
#define MAX 100
using namespace std;
class graph{
    list <int> g[MAX];
    int edge;
    int vertices;
public:
    graph(int edge,int vertices){this->edge=edge;this->vertices=vertices;}
    void insert();
    //void dfs;
    void bfs(int s);
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
void graph::bfs(int s){
    list <int> q;
    bool *visited = new bool[vertices];
    visited[s]=1;
    q.push_back(s);
    list<int>::iterator i;
    while(!q.empty()){
        s=q.front();
        printf("%d\n",s);
        q.pop_front();
        for(i=g[s].begin();i!=g[s].end();i++){
            if(!visited[*i]){
                q.push_back(*i);
                visited[*i]=1;
            }
        }
    }
}
int main(int argc, char const *argv[]) {
    int edges,vertices;
    scanf("%d %d",&edges,&vertices);
    graph G(edges,vertices);
    G.insert();
    G.bfs(1);
    return 0;
}
