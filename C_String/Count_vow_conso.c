#include<stdio.h>
int main(){
    char str[100];
    int vow=0,con=0,i=0;
    printf("enter the string: ");
    //fgets(str,sizeof(str),stdin);
    gets(str);
   while(str[i]!='\0'){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
        vow++;
    }else if(str[i]>'a' &&str[i]<='z' ||str[i]>'A'&&str[i]<='Z'){
        con++;
    }
    i++;
 }
 printf("No. of vowel is:%d\tand no. of consonent is:%d",vow,con);
 return 0;

}