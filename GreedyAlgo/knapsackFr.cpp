#include<iostream>
using namespace std;
struct knap{
    int profit;
    int weight;
    double ratio;
};
const int n=7;
int w=15;
int p[]={10,5,15,7,6,18,3};
int wt[]={2,3,5,7,1,4,1};

struct knap arr[n]={0};
void initialize(){
    for(int i=0;i<n;i++){
        arr[i].profit=p[i];
        arr[i].weight=wt[i];
        arr[i].ratio=1.0*p[i]/wt[i];
    }
}
void display(){
    for(int i=0;i<n;i++){
        cout<<"("<<arr[i].profit<<","<<arr[i].weight<<")"<<" ";
    }
}
void swap(struct knap arr[],int i,int j){
    struct knap temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void sortL(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j].ratio<arr[j+1].ratio){    // sort in non-increasing order
                swap(arr,j,j+1);
            }
        }
    }
}
void knapsack(){
    double x[n]={0.0};
    double ans=0;   //profit

    for(int i=0;i<n;i++){
        if(arr[i].weight>w){        // item weight is greater than bag      weight,we need to fraction of item weight
            x[i]=1.0*w/arr[i].weight;
            ans+=x[i]*arr[i].profit;
            break;
        }else{
            x[i]=1.0;
            w-=arr[i].weight;
            ans+=x[i]*arr[i].profit;
        }
    }
    cout<<"Total profit:"<<ans;
}
int main(){
    initialize();
    display();
    sortL();
    cout<<endl;
    display();
    knapsack();
}