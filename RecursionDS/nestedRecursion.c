#include<stdio.h>

int fun(int n){
    if(n>100)
    return n-10;
    return fun(fun(n+11));
}
int main(){
    int ans=fun(95);
    printf("%d",ans);
    return 0;
}