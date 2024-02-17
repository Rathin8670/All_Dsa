#include<iostream>
using namespace std;
/*1.finding duplicate in brute force method*/
void duplicate(char str[]){
    int i,j;
    for(i=0;str[i]!='\0';i++){
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                cout<<str[i]<<endl;
            }
        }
    }
}
/*2.using bitwise operations*/
void dupli(char str[]){
    int h=0,x=0;
    for(int i=0;i<str[i]!='\0';i++){
        x=1;
        x=x<<(str[i]-97);
        if((x&h)>0){
            cout<<str[i]<<" ";
        }else{
            h=x|h;
        }
    }
}
/*3.using hashtable*/
void dupliStr(char str[]){
    char h[26]={0}; //this array should be initialize with 0, otherwise it can take the garbage value.

    for(int i=0;str[i]!='\0';i++){
        h[str[i]-97]++;
    }
    
    for(int i=0;i<26;i++){
        if(h[i]>1){
            cout<<(char)(i+97)<<" ";
           
        }
    }
}

int main(){
    char str[]="finding";
    dupliStr(str);
    return 0;
}