#include<iostream>
using namespace std;
int mn,mx;
int arr[]={10,29,34,90,12,98};

void maxMin(int i,int j){
    int max1,min1,mid;
    if(i==j){
        mx=mn=arr[i];
    }else{
        if(i==j-1){
            if(arr[i]<arr[j]){
                mx=arr[j];
                mn=arr[i];
            }else{
                mx=arr[i];
                mn=arr[j];
            }
        }else{
            mid=(i+j)/2;
            maxMin(i,mid);
            max1=mx,min1=mn;
            maxMin(mid+1,j);

            if(max1>mx) mx=max1;
            if(min1<mn) mn=min1;
        }
    }
}
int main(){
    int n=sizeof(arr)/sizeof(int);
    maxMin(0,n-1);
    cout<<"MAx Ele:"<<mx<<endl;
    cout<<"Min Ele:"<<mn<<endl;
}