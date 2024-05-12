#include<stdio.h>
//int x=0;                  /*Globally declare variable*/
int fun(int n){
  static int x=0;                       //static variable
    if(n>0){
        x++;
       return fun(n-1)+x;
        
    }
    return 0;
}
int main(){
    int n=5;
    printf("%d",fun(5));
    return 0;

}