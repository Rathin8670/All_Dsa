#include<stdio.h>
void bubble(int arr[1000],int s){
    for(int i=0;i<s;i++){
        for(int j=1;j<s-i;j++){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;

            }else{
                break;
            }
        }
    }
}
int main(){
    int arr[1000];
    int s;
    scanf("%d",&s);
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
       bubble(arr,s);
       for(int i=0;i<s;i++){
        printf("%d ",arr[i]);
       }
    
}