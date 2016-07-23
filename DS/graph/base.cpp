#include <stdio.h>
#include <queue>
#include <vector>
#define MAX 100
using namespace std;
class graph{
    vector <int> g[MAX];
    int edge;
    int vertices;
public:
    graph(int edge,int vertices){this->edge=edge;this->vertices=vertices;}
    void insert();
    void dfs_util(int s,bool visited[]);
    void dfs(int s);
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
void graph::dfs_util(int s,bool visited[]){
    visited[s]=1;
    printf("%d\t",s);
    for(int i=0;i<g[i].size();i++){
        if(!visited[g[s][i]]){
            dfs_util(g[s][i],visited);
        }
    }
}
void graph::dfs(int s){
    bool *visited = new bool[vertices];
    for(int i=0;i<vertices;i++){
        visited[i]=0;
    }
    dfs_util(s,visited);
}
void graph::bfs(int s){
    queue <int> q;
    bool *visited = new bool[vertices];
    visited[s]=1;
    q.push(s);
    //list<int>::iterator i;
    while(!q.empty()){
        s=q.front();
        printf("%d\n",s);
        q.pop();
        for(int i=0;i!=g[s].size();i++){
            int x=g[s][i];
            if(!visited[x]){
                q.push(x);
                visited[x]=1;
            }
        }
    }
}
int main(int argc, char const *argv[]) {
    int edges,vertices;
    scanf("%d %d",&edges,&vertices);
    graph G(edges,vertices);
    G.insert();
    //G.bfs(2);
    G.dfs(2);
    return 0;
}
