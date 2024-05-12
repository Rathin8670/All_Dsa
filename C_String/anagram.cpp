#include<iostream>
using namespace std;
void anagram(char a[],char b[]){
    int hash[26]={0};
    int i;
    //increment the values from 0 
    for(i=0;a[i]!='\0';i++){
        hash[a[i]-97]++;
    }
    //decrement the values
    for(i=0;b[i]!='\0';i++){
        hash[b[i]-97]--;
         if(hash[b[i]-97]<0){
         cout<<"Not anagram";
          break;
        }
    }
    if(b[i]=='\0')
        cout<<"anagram";
    
     
}
int main(){
    char s1[]="decimak";
    char s2[]="medical";
    anagram(s1,s2);
    return 0;
}