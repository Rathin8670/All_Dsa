#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Rathin";
    //printf("%d",strlen(str));
    int ans=length(str);
    printf("%d",ans);
    
}
/*finding length of a string*/
int length(char str[]){
    int i;
    for( i=0;i<str[i]!='\0';i++){

    }
    return i;
}
int count(char str[]){
    int c=0,i=0;
    while(str[i]!='\0'){
        c++;
        i++;
    }
    return c;
}