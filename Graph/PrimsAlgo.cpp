#include<iostream>
using namespace std;
#define I 32767
const int n=7;
int cost[8][8]={{I,I,I,I,I,I,I,I},
                {I,I,25,I,I,I,5,I},
                {I,25,I,9,I,I,I,6},
                {I,I,9,I,10,I,I,I},
                {I,I,I,10,I,12,I,11},
                {I,I,I,I,12,I,18,16},
                {I,5,I,I,I,18,I,I},
                {I,I,6,I,11,16,I,I}};

int near[n+1]={I,I,I,I,I,I,I,I};     
int t[2][n-1];

void prims(){
    // find minimum vertix
    int mn=I;
    int u,v;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(cost[i][j]<mn){
                mn=cost[i][j];
                u=i,v=j;
            }
        }
    }
    t[0][0]=u,t[1][0]=v;
    near[u]=near[v]=0;

    // update the near array by u & v's adjacents who has minimum weight
    for(int i=1;i<=n;i++){
        if(cost[i][u]<cost[i][v] && near[i]!=0){
            near[i]=u;
        }else if(cost[i][u]>=cost[i][v] && near[i]!=0){
            near[i]=v;
        }   
    }
    
    // Now repeating part will be ......
    int k;
    for(int i=1;i<n-1;i++){
        mn=I;
        for(int j=1;j<=n;j++){
            if(near[j]!=0 && cost[j][near[j]]<mn){
                mn=cost[j][near[j]];
                k=j;
            }
        }
        t[0][i]=k;
        t[1][i]=near[k];
        near[k]=0;

        for(int j=1;j<=n;j++){
            if(near[j]!=0 && cost[j][k]<cost[j][near[j]]){
                near[j]=k;
            }
        }
    }
    // print the spanning tree
    for(int i=0;i<n-1;i++){
        cout<<"("<<t[0][i]<<","<<t[1][i]<<")"<<" ";
    }
}
int main(){
    prims();
    return 0;
}
