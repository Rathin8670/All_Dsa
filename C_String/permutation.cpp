#include<iostream>
using namespace std;
void perm(char str[],int k){
    static int arr[10]={0};
    static char res[10];
    int i=0;
    if(str[k]=='\0'){
        res[k]='\0';
        cout<<res<<" ";
    }else{
        for(i=0;str[i]!='\0';i++){
            if(arr[i]==0){
            arr[i]=1;
            res[k]=str[i];
            perm(str,k+1);
             arr[i]=0;
        }
        }
    }
}
int main(){
    char str[]="abc";
    int k=0;
    perm(str,k);
    return 0;

}