#include<iostream>
#include<fstream>
using namespace std;
#define max 10
#define inf 32667

int size;
int graph[max][max];
void readG(){
    fstream infile;
    infile.open("d.txt",ios::in);
    infile>>size;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            infile>>graph[i][j];
        }
    }
}
void showG(){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

void dijsktra(int start){
    int dist[max];
    int vis[max];
    int cost[max][max];

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(graph[i][j]==0){
                cost[i][j]=inf;
            }else{
                cost[i][j]=graph[i][j];
            }
        }
    }

    // initialize distance array
    for (int i = 0; i < size; i++) {  
        dist[i] = cost[start][i];   
        vis[i] = 0;  
    }  


    dist[start]=0;
    vis[start]=1;
    int count=1;
    int min_dist,next_node;

    while(count<size){
        min_dist=inf;
        for(int i=0;i<size;i++){
            if(dist[i]<min_dist &&!vis[i]){
                min_dist=dist[i];
                next_node=i;
            }
        }
        vis[next_node]=1;

        for(int i=0;i<size;i++){
            if(dist[i]>cost[next_node][i]+min_dist && !vis[i]){
                dist[i]=cost[next_node][i]+min_dist;
            }
        }
        count++;
    }

    //print 
    for(int i=0;i<size;i++){
        if(i!=start){
            cout<<"The distance from source to "<<char('A'+i)<<" "<<dist[i]<<endl;
        }
    }

}
int main(){
    int  source;  
    source=0;
    
    readG();
    // showG();
    dijsktra(source);  
    
    return 0;  
}