#include<iostream>
using namespace std;
#define I 32767
const int n=7;
const int e=8;

int set[n+1]={-1,-1,-1,-1,-1,-1,-1,-1};
int edges[3][e+1]={{ 1, 1,  2,  2, 3,  4,  4,  5,  5},
                    { 2, 6,  3,  7, 4,  5,  7,  6,  7},
                    {25, 5, 12, 10, 8, 16, 14, 20, 18}};
int included[n+1]={0};
int t[2][n-1];

int find(int u){
    int x=u,v=0;
    while(set[x]>0){
        x=set[x];
    }
    // while(u!=x){
    //     v=set[u];
    //     set[u]=x;
    //     u=v;
    // }
    return x;
}

void Union(int u,int v){
    if(set[u]<set[v]){          // -ve value
        set[u]=set[u]+set[v];
        set[v]=u;
    }else{
        set[v]=set[u]+set[v];
        set[u]=v;
    }
}
void kruskal(){
    int i=0,mn=I;
    int k,u,v;
    while(i<n-1){
        // find minimun weighted edge
        mn=I;
        for(int j=0;j<e;j++){
            if(included[j]==0 && edges[2][j]<mn){
                mn=edges[2][j];
                k=j;
                u=edges[0][k];
                v=edges[1][k];
            }
        }
        if(find(u)!=find(v)){
            t[0][i]=u;
            t[1][i]=v;
            Union(find(u),find(v));
            i++;
        }
        included[k]=1;
    }
     // print the spanning tree
    for(int i=0;i<n-1;i++){
        cout<<"("<<t[0][i]<<","<<t[1][i]<<")"<<" ";
    }
}
int main(){
    kruskal();
    return 0;
}
