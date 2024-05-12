#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max;
    max=a>b && a>c?printf("%d is max",a) :b>a &&b>c?printf("%d is max",b):printf("%d is max",c);
    return 0;
}