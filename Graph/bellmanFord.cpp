
#include <iostream>  
#include <vector>  
#define inf 32667
#define mx 10
using namespace std;  

// Structure to represent an edge in the graph  
struct Edge {  
    int src, dest, wegt;  
};  

const int v=4;

// -ve edge cycle present
int graph[v][v]={{0,4,inf,5},
            {inf,0,inf,5},
            {inf,-10,0,inf},
            {inf,inf,3,0}};

// int graph[v][v]={{0,3,inf,5},
//             {inf,0,inf,inf},
//             {inf,-3,0,inf},
//             {inf,inf,2,0}};
            

vector<Edge>edgeList;

void Initialize(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(graph[i][j]!=0 && graph[i][j]!=inf){
                Edge edge;
                edge.src=i;
                edge.dest=j;
                edge.wegt=graph[i][j];
                edgeList.push_back(edge);
            }
        }
    }
}
void bellman(int size,int source){
    int dist[mx];
    for(int i=0;i<size;i++){
        dist[i]=inf;
    }
    dist[source]=0;

    // relex |V|-1 times
    for(int i=1;i<=size-1;i++){
        for(auto &edge:edgeList){
            int u=edge.src;
            int v=edge.dest;
            int cost=edge.wegt;

            if(dist[v]> dist[u]+cost && dist[u]!=inf){
                dist[v]=dist[u]+cost;
            }
        }
    }

    //check for -ve cycle 
    for(auto &edge:edgeList){
        int u=edge.src;
        int v=edge.dest;
        int cost=edge.wegt;

        if(dist[u]!=inf && dist[u]+cost<dist[v]){
            cout << "Graph contains a negative weight cycle!" << endl;  
            return;  
        }
    }

    cout << "Shortest distances from source vertex " << source << ":" << endl;  
    for (int i = 0; i < v; ++i) {  
        cout << "Vertex " << i << ": " << dist[i] << endl;  
    }  
}
int main() {  
    Initialize(v);
    bellman(v,0);
}  