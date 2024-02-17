#include<stdio.h>
int main(){
    int n,ans=0,temp;

    scanf("%d",&n);
    temp=n;

    while(n!=0){
       int ld=n%10;
         ans=ans*10+ld;
        n/=10;

    }

    if(temp==ans){
        printf("Palindrome");
    }else{
        printf("NO Palindrome");
    }
    
    return 0;
}