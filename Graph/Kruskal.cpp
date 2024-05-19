#include<iostream>
#include<fstream>
using namespace std;
#define I 32767
struct Edge{
    int src;
    int des;
    int wgt;
};
int n;
int graph[10][10];
int tEdge=0;

struct Edge arr[10];
struct Edge mst[10];

void readGraph(){
	fstream infile;
	infile.open("graph.txt", ios::in);
	infile >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			infile >> graph[i][j];
		}
	}
	infile.close();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(graph[i][j]){
                arr[tEdge].src=i;
                arr[tEdge].des=j;
                arr[tEdge++].wgt=graph[i][j];
            }
        }
    }
}

int set[10];
void initialize(){
    for(int i=0;i<n;i++){
        set[i]=-1;
    }
}

void sortEdge(){
    for(int i=0;i<tEdge-1;i++){
        for(int j=0;j<tEdge-i-1;j++){
            if(arr[j].wgt>arr[j+1].wgt){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

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
int mstEdge=0;
void kruskal(){
    for (int i = 0; i <tEdge; i++){
            if (find(arr[i].src) != find(arr[i].des)){
                Union(arr[i].src, arr[i].des);
                mst[mstEdge].src = arr[i].src;
                mst[mstEdge].des = arr[i].des;
                mst[mstEdge++].wgt = arr[i].wgt;
            }
        }

}
void showMST(){
	int totalCost = 0;
	for (int i = 0; i < mstEdge; i++){
		cout << char('A' + mst[i].src) << "-" << char('A' + mst[i].des) << "->" << mst[i].wgt << endl;
		totalCost += mst[i].wgt;
	}
	cout << "Total cost for this MST will be: " << totalCost << endl;
}
int main(){
    readGraph();
    initialize();
    sortEdge();
    kruskal();
    showMST();
    return 0;
}
