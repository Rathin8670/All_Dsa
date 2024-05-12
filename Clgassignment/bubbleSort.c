#include<stdio.h>
int main(){
    int arr[100],size;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    //bubble sort
    for(int i=0;i<size;i++){
        for(int j=1;j<size-i;j++){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;

            }
        }
    }
     for(int i=0;i<size;i++){
       printf("%d",arr[i]);
    }
    return 0;
}