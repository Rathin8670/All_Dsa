#include<stdio.h>
int main(){
    
    printf("%d",fact(1));
}
//recursive function
   int fact(int n){
        
        if(n==0 || n==1){
            return 1;

        }else{
            return n*fact(n-1);
        }
    }
 

