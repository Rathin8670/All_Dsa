#include<stdio.h>
int main(){
    int n=5;
printf("%d",fib(n));

}
int fib(int n){
    if(n==0 || n==1){
        printf("%d",fib(n));
        return n;

    }else{
        printf("%d",fib(n));
        return fib(n-1)+fib(n-2);
    }
}