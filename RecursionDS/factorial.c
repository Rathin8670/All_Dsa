#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
    return -1;
}
int main(){
    int ans=fact(1);
    printf("%d",ans);
    return 0;
}