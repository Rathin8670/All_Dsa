#include<iostream>
#include<queue>
#include<fstream>
using namespace std;
int n;
int G[10][10];
void readGraph(){
    fstream infile;
    infile.open("graph.txt",ios::in);
    if(!infile){
        cout<<"ERROR to open file\n";
        exit(1);
    }
    infile>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            infile>>G[i][j];
        }
    }
    infile.close();
}

void showGraph(){
    
}
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
    // bfs(4,G);
    dfs(3,G,7);
}