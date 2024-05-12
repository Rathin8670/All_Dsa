#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[200];
    printf("enter first string: ");
    scanf("%s",str1);
    
     printf("enter 2nd string: ");
    scanf("%s",str2);
    
    strcat(str1,str2);
    printf("%s",str1);
    return 0;

}

