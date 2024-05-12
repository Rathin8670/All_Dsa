#include<stdio.h>
int main(){
    int n,temp,sum=0;
    scanf("%d",&n);
   temp=n;
    while(n!=0)
    {
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }
    if (temp==sum){printf("armstrong");}
    else
    printf("no armstrong");
    
    return 0;
}