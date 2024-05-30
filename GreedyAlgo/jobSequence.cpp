#include<iostream>
#include<vector>
using namespace std;
struct Job{
    int profit;
    int deadline;
};
int p[] = {3, 5, 20, 18, 1, 6, 30};
int d[] = {1, 3, 4, 3, 2, 1, 2};
const int n = 7;

struct Job arr[n]={0};

void initialize(){
    for(int i=0;i<n;i++){
        arr[i].profit=p[i];
        arr[i].deadline=d[i];
    }
}
void display(){
    for(int i=0;i<n;i++){
        cout<<"("<<arr[i].deadline<<","<<arr[i].profit<<")"<<" ";
    }
    cout<<endl;
}
void swap(struct Job arr[],int i,int j){
    struct Job temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void sortL(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j].profit<arr[j+1].profit){    // sort in non-increasing order
                swap(arr,j,j+1);
            }
        }
    }
}

int getMaxDeadline(){
    int mx=arr[0].deadline;
    for(int i=0;i<n;i++){
        if(arr[i].deadline>mx){
            mx=arr[i].deadline;
        }
    }
    return mx;
}

void job(){
    int size=getMaxDeadline();
    vector<int>x(size,-1);
    // int x[size];
    // for(int i=0;i<size;i++) x[i]=-1;

    int ans=0;      //profit
    for(int i=0;i<n;i++){   
        for(int j=arr[i].deadline;j>=0;j--){
            if(x[j]==-1){
                x[j]=i;
                ans+=arr[i].profit;
                break;
            }
        }
    }
    cout<<"Profit:-"<<ans;
}
int main(){
    initialize();
    display();
    sortL();
    display();
    job();
}