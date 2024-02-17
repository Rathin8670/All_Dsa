#include<stdio.h>
/*using recursive function*/
int sum(int n){
    if(n==0)
    return 0;
    else
    return sum(n-1)+n;
}

/*using direct formula*/
int Sum(int n){
    return n*(n+1)/2;
}


int main(){
    //int ans=sum(5);
    int ans=Sum(5);
    printf("%d",ans);
    return 0;
}