#include<stdio.h>
int fib(int n){
    if(n<=1)
    return n;
    return fib(n-2)+fib(n-1);
}
int main(){
    int n=2;
    printf("%d",fib(2));
    return 0;

}