#include<iostream>
#include<fstream>
#include<queue>
using namespace std;
#define max 10
int n;
int graph[max][max];
void readG(){
    fstream infile;
    infile.open("p.txt",ios::in);
    infile>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            infile>>graph[i][j];
        }
    }
}
void showG(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
// void bfs(int st){
//     int vis[max]={0};
//     cout<<char(st+'A')<<" ";
//     queue<int>q;
//     q.push(st);
//     vis[st]=1;
//     while(!q.empty()){
//         int u=q.front();
//         q.pop();
//         for(int v=0;v<n;v++){
//             if(graph[u][v]==1 && vis[v]==0){
//                 cout<<char(v+'A')<<" ";
//                 q.push(v);
//                 vis[v]=1;
//             }
//         }
//     }

// }
int main(){
    readG();
    showG();
    bfs(0);
}