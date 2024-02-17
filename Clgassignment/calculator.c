#include<stdio.h>
int main(){
    int a,b,res;
    scanf("%d",&a);
    int ch;
    scanf("%c",&ch);
    scanf("%d",&b);

     res=a+b;
    

    switch(ch){
        case '+':
       printf("%d",res);
        break;
        case '-':printf("%d",a-b);
        break;
        case '*':printf("%d",a*b);
        break;
        case '/':printf("%d",a/b);
        break;
    }
    return 0;
}