#include<iostream>

using namespace std;

void reverse(char str[]){
    int i,j;
    //finding length of the string
    for(j=0;str[j]!='\0';j++){

    }
    j=j-1;          //assign last index

//reversly copying the values
    for(i=0,j;i<j;i++,j--){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str<<endl;
}
void rever2(char str[]){
    int i,j;
   
    for(i=0;str[i]!='\0';i++){

    }
    i=i-1;
    char str2[i-1];
    for(j=0;i>=0;i--,j++){
        str2[j]=str[i];
    }
    cout<<str2;

}
int main(){
    char str[]="Rathin";
   // reverse(str);
   rever2(str);
    return 0;
}