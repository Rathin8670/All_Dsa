#include<iostream>
#include<fstream>
#include<queue>
#define max 10

using namespace std;
class Node{
    public:
    int vertex;
    Node *next;
};

Node* adjList[10]={NULL};
int n;

void insertList(int i,int j){
    Node* cur=new Node;
    cur->next=NULL;
    cur->vertex=j;
    // insert the 1st node
    if(adjList[i]==NULL){
        adjList[i]=cur;
        return;
    }

    Node* temp=adjList[i];
    while(temp->next) temp=temp->next;

    temp->next=cur;
    return;
}

void readGraph(){
    fstream infile;
    infile.open("bfs_dfs.txt",ios::in);
    if(!infile) cout<<"garbar ho giya biro:)";
    infile>>n;
    int data;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            infile>>data;
            if(data==1){
                insertList(i,j);
            }
        }
    }
    infile.close();
}
void showGraph(){
    for(int i=0;i<n;i++){
        if(adjList[i]!=NULL){
            Node* temp=adjList[i];
            cout<<"adjacent of "<<char('A'+i)<<"-->";
            while(temp){
                cout<<char('A'+temp->vertex)<<" ";
                temp=temp->next;  
            }
            cout<<endl;
        }
    }
}

void bfs(int i){
    queue<int>q;
    int visited[n]={0};
    q.push(i);
    visited[i]=1;

    while(!q.empty()){
        int u=q.front();
        cout<<char('A'+u)<<" ";
        q.pop();
        Node* temp=adjList[u];
        while(temp){
            if(!visited[temp->vertex]){
                q.push(temp->vertex);
                visited[temp->vertex]=1;
            }
            temp=temp->next;
        }
        
    }
}

int vis[max]={0};
void dfs(int st){
    vis[st]=1;
    cout<<char(st+'A')<<" ";
    Node *temp=adjList[st];
    while(temp){
        if(!vis[temp->vertex]){
            dfs(temp->vertex);
        }
        temp=temp->next;
    }
}
int main(){
    readGraph();
    showGraph();
    bfs(4);
    cout<<endl;
    dfs(4);

    return 0;
}