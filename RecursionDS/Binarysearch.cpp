#include<iostream>
using namespace std;
/*binary search uising recursion*/

int search(int arr[],int target, int st,int end){
   // int end=(sizeof(arr)/sizeof(int))-1;
    if(st>end){
        return -1;
    } 
    int mid=st+(end-st)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
        return search(arr,target,st,mid-1);
    }else{
        return search(arr,target,mid+1,end);
    }
    return -1;

}
int main(){
    int arr[]={1,2,3,4,5,6,8,12,19};
    int target=12;
    int st=0;
    int end=(sizeof(arr)/sizeof(int))-1;
    int ans=search(arr,target,st,end);
    cout<<ans<<endl;
   
    return 0;
}