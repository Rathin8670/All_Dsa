#include<iostream>
#include<climits>
#include<fstream>
using namespace std;

int n;
int graph[10][10];
int mst[10];
int parent[10];
int key[10];


void readGraph(){
	fstream infile;
	infile.open("prims.txt", ios::in);
	infile >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			infile >> graph[i][j];
		}
	}
	infile.close();
}
void initialize(){
    for(int i=0;i<n;i++){
        mst[i]=0;
        key[i]=INT_MAX;
        parent[i]=-1;
    }
}
int minimunKey(){
    int mn=INT_MAX;
    int mnInd;
    for(int i=0;i<n;i++){
        if(mst[i]==0 && key[i]<mn){
            mn=key[i];
            mnInd=i;
        }
    }
    return mnInd;
}
void prims(){
    //It select as first vertex
    key[0]=0;

    int edge;
    for(int i=0;i<n-1;i++){
        // select the vertex having minimum key and that is not added in the MST yet from the set of vertices
        edge=minimunKey();
        mst[edge]=1;
        for(int v=0;v<n;v++){
            if(graph[edge][v]&& mst[v]==0 && graph[edge][v]<key[v]){
                parent[v]=edge;
                key[v]=graph[edge][v];
            }
        }
    }
}

void printMST(){
    cout<<"Edges    Weight"<<endl;
    for(int i=1;i<n;i++){
        cout<<char('A'+parent[i])<<"--"<<char('A'+i)<<"     "<<graph[i][parent[i]]<<endl;
    }
}
int main(){
    readGraph();
    initialize();
    prims();
    printMST();

}
