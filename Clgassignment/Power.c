#include<stdio.h>

float power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b>0){
        return a*power(a,b-1);
    }else{
        return 1/power(a,-b);
    }
}
int main(){
int a,b;
    scanf("%d%d",&a,&b);
    float ans=power(a,b);
    printf("%f",ans);
}