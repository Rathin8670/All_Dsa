#include<stdio.h>
int main(){
    int n=5,m=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
    return 0;

}