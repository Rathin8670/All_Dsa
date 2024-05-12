#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:-";
    cin>>n;
    int adjM[n+1][n+1]={0};
    cout<<"\nEnter edges:-";
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u;
        cin>>v;
        adjM[u][v]=1;
        adjM[v][u]=1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<adjM[i][j]<<" ";
        }
        cout<<endl;
    }
}
