#include<iostream>
#include<queue>
using namespace std;
const int n=7;
void bfs(int i,int g[][7]){
    queue<int>q;
    int visited[7]={0};
    cout<<i<<" ";
    q.push(i);
    visited[i]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v=1;v<=7;v++){
            if(g[u][v]==1 && visited[v]!=1){
                cout<<v<<" ";
                visited[v]=1;
                q.push(v);
            }
        }
    }
}
int visited[7]={0};
void dfs(int u,int g[][7],int n){
    if(visited[u]==0){
        cout<<u<<" ";
        visited[u]=1;
        for(int v=1;v<=n;v++){
            if(g[u][v]==1 && visited[v]!=1){
                dfs(v,g,n);
            }
        }
    }
}
int main(){
    int G[7][7]={{0,0,0,0,0,0,0},
                {0,1,1,1,0,0,0},
                {0,1,0,1,1,0,0},
                {0,1,1,0,1,0,0},
                {0,1,0,1,0,1,1},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0}};
    bfs(2,G);
    cout<<endl;
    dfs(2,G,7);
}