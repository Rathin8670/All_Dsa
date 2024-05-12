#include<iostream>
using namespace std;
#define max 10
#define inf 32667

void dijsktra(int graph[max][max],int size,int start){
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
    int Graph[max][max], i, j, size, source;  
    // declaring the size of the matrix    
    size = 7;  

    //declaring the nodes of graph  
    Graph[0][0] = 0;  
    Graph[0][1] = 4;  
    Graph[0][2] = 0;  
    Graph[0][3] = 0;  
    Graph[0][4] = 0;  
    Graph[0][5] = 8;  
    Graph[0][6] = 0;  
    
    Graph[1][0] = 4;  
    Graph[1][1] = 0;  
    Graph[1][2] = 8;  
    Graph[1][3] = 0;  
    Graph[1][4] = 0;  
    Graph[1][5] = 11;  
    Graph[1][6] = 0;  
    
    Graph[2][0] = 0;  
    Graph[2][1] = 8;  
    Graph[2][2] = 0;  
    Graph[2][3] = 7;  
    Graph[2][4] = 0;  
    Graph[2][5] = 4;  
    Graph[2][6] = 0;  
    
    Graph[3][0] = 0;  
    Graph[3][1] = 0;  
    Graph[3][2] = 7;  
    Graph[3][3] = 0;  
    Graph[3][4] = 9;  
    Graph[3][5] = 14;  
    Graph[3][6] = 0;  
    
    Graph[4][0] = 0;  
    Graph[4][1] = 0;  
    Graph[4][2] = 0;  
    Graph[4][3] = 9;  
    Graph[4][4] = 0;  
    Graph[4][5] = 10;  
    Graph[4][6] = 2;  
    
    Graph[5][0] = 0;  
    Graph[5][1] = 0;  
    Graph[5][2] = 4;  
    Graph[5][3] = 14;  
    Graph[5][4] = 10;  
    Graph[5][5] = 0;  
    Graph[5][6] = 2;  
    
    Graph[6][0] = 0;  
    Graph[6][1] = 0;  
    Graph[6][2] = 0;  
    Graph[6][3] = 0;  
    Graph[6][4] = 2;  
    Graph[6][5] = 0;  
    Graph[6][6] = 1;  

    source=0;
    
    // calling the DijkstraAlgorithm() function by passing the Graph, the number of nodes and the start node  
    dijsktra(Graph, size, source);  
    
    return 0;  
}