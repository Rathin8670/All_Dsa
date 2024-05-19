#include<iostream>
using namespace std;
int partition(int low,int high,int arr[]){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[low],arr[j]);
    
    return j;
}
void quickSort(int low,int high,int arr[]){
    if(low<high){
        int j=partition(low,high,arr);
        quickSort(low,j,arr);
        quickSort(j+1,high,arr);
    }
}
int main(){
    int arr[]={80,26,90,10,20,22};
    int n=sizeof(arr)/sizeof(int);
    int low=0,high=n;
    quickSort(low,high,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}