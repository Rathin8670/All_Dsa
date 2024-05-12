#include<stdio.h>

/*using recursion*/
int fib(int n){
    if(n<=1){
       return n;
    }
    else{
        return fib(n-1)+fib(n-2);

    }
}
/* way 2==Optimized solution===>time com=O(n)*/

int f[10]; //globally declare the array

int mfib(int n){
    if(n<=1){
        f[n]=n;
        return n;

    }
    else{
        if(f[n-2]==-1){
            f[n-2]=mfib(n-2);
        }
        if(f[n-1]==-1){
            f[n-1]=mfib(n-1);
        }
        return f[n-2]+f[n-1];
    }

}

int main(){
    int n=8;

    /*for printing ith term*/
        // printf("%d\n",fib(n));

    /*for printing the series*/
       for(int i=0;i<n;i++){
            printf("%d ",fib(i));
          }
          printf("\n");


    /*for way 2 solution*/
    for(int i=0;i<10;i++){
        f[i]=-1;
    }
    // printf("%d\n",mfib(n));
    for(int i=0;i<n;i++){
            printf("%d ",fib(i));
          }



    
    return 0;
}