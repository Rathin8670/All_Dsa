#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    switch(a>b){
        case 1:printf("%d is max",a);
        break;
       case 0:printf("%d is max",b);
        break; 
    }
    return 0;
}