#include<stdio.h>


int main(){
    int arr[100],i;

    int s=5;
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
        int newArr[s],k;
k=0;
for(i=0;i<s;i++){
    bool isDubli=false;
    for(j=0;j<k;j++){
        if(arr[i]==newArr[j]){
            isDubli=true;
            break;
        }
    }
    if(!isDubli){
        newArr[k++]=arr[i];
    }
}

for(i=0;i<s;i++){
    printf("%d",newArr[i]);
}
return 0;


}
