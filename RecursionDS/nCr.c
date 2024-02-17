#include<stdio.h>
/*using factorial*/
int fact(int n){
    if(n==0)
    return 1;
    else
    return fact(n-1)*n;
}
int C(int n,int r){
    int num,dem;
    num=fact(n);
    dem=fact(r)*fact(n-r);
    return num/dem;
}

/*Using Recursion Function*/
int nCCr(int n,int r){
    if(r==0||n==r)
    return 1;

    return nCCr(n-1,r-1)+nCCr(n-1,r);
}
int main(){
    
  //    printf("%d\n",C(12,2));
/*==========================*/
     printf("%d",nCCr(5,2));

    return 0;
}