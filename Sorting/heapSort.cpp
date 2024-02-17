#include<iostream>
using namespace std;
void insertH(int arr[],int n){
    int temp=arr[n];
    int i=n;
    while(i>1 && temp>arr[i/2]){
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void deleteHeap(int arr[],int n){
    int x,i,j;
    x=arr[1];
    arr[1]=arr[n-1];    //last element
    i=1;
    j=2*i;
    while(j<n-1){
        if(arr[j+1]>arr[j])
            j++;
        if(arr[j]>arr[i]){
            swap(arr,i,j);
            i=j;
            j=j*2;
        }else{
            break;
        }
    }
    arr[n-1]=x;
}
int main(){
    int arr[]={0,10,20,30,25,5,40,35};
    for(int i=2;i<8;i++){
        insertH(arr,i);
    }
    for(int i=1;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
    for(int i=8;i>1;i--){
        deleteHeap(arr,i);
    }
    for(int i=1;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}