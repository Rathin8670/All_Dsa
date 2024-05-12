#include<stdio.h>
int s=5;
int binS(int arr[100],int key){
    int st=0;
    int end=arr[s-1];
    int mid=st+(st-end)/2;
    //check  the key elemnt with mid
    if(arr[mid]==key){
        printf("%d",mid);
    }
   
    st++;
    end--;
    return binS(arr,key);
    

}
int main(){
    
    int arr[100]={1,2,3,4,5};
    int key=2;
    printf("%d",binS(arr,key));
    return 0;


}