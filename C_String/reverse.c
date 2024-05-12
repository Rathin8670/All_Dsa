#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("enter the string: ");
    scanf("%s",str);
    int j=strlen(str)-1;       //char arr index start from 0,so the last element is this
    
    for(int i=0;i<strlen(str)/2;i++){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
    printf("reverse string is: %s",str);
    return 0;
}