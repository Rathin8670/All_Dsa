#include<stdio.h>
int main(){
    double n,x,i=1,s=1,m=1;       //s=sign
    printf("enter n=\n");
    scanf("%lf",&n);
    //int x;
    printf("enter x=\n");
    scanf("%lf",&x);
    double sum=0.0;
    /*calculate the sum of the  series*/
    for(int i=1;i<=n;i++){
        sum+=x*s/m;
        s+=(-1);
        m*=(i+1);
    }

    
    printf("%.2lf",sum);
    return 0;
}

