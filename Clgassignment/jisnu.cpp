#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int n;
int graph[10][10];
void readGraph(){
   	FILE *file=fopen("bfs.txt","r");  
	int i,j;

	if(file==NULL){
		printf("Error in opening file !!!");
		exit(0);
	}
	// Read the dimensions of the matrix
    fscanf(file, "%d", &n);
	int cost[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
            fscanf(file,"%d",&cost[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",cost[i][j]);
		}
	printf("\n");
	}
}


// void showGraph(){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%3d",graph[i][j]);
//         }
//         printf("\n");
//     }
// }


#define MAX 10
class queue{
    int arr[MAX];
    int front;
    int rear;
    public:
    queue(){
        front=rear=-1;
    }
    int isFull(){
        if(rear==MAX-1){
            return 1;
        }
        return 0;
    }
    bool isEmpty(){
         if(front==rear){ 
            return 1;
        }
        return 0;    
    }
    void insert(int item){
        rear++;
        arr[rear]=item;
    }
    int peek(){
        int x=front+1;
        return arr[x];
    }
    void del(){
        front++;
    }
};

int visited[MAX]={0};

void bfs(int src){
    queue q;
    q.insert(src);
    visited[src]=1;
    while(!q.isEmpty()){
        int u=q.peek();
        q.del();
        for(int i=0;i<n;i++){
            if(graph[u][i]==1 && visited[i]==0){
                q.insert(i);
                visited[i]=1;
            }
        }
    }
}


int main(){
    readGraph();
   // showGraph();
    // cout << "BFS order: ";
    // bfs(0);
    cout<<endl;
}
