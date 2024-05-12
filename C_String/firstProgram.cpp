#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // char name[1000];

    // cin.getline(name,10);
    // cout<<name<<endl;
    char s[]="WelCoMe";
    //for toggling the cases
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]+=32;
        }else if(s[i]>=97&&s[i]<=120){
            s[i]-=32;
        }
    }
    cout<<s;
    return 0;
}