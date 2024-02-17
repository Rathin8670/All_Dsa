#include<stdio.h>

/*Way 1*/

int Pow(int m,int n){
    if(n==0)
    return 1;
    else
    return Pow(m,n-1)*m;
}

/*Way 2*/

int pow(int m,int n){
    if(n==0)
    return 1;
    if(n%2==0){
        return pow(m*m,n/2);
    }
    else{
        return m*pow(m*m,(n-1)/2);
    }
}
int main(){
    int ans=pow(2,4);
    printf("%d",ans);
    return 0;
}