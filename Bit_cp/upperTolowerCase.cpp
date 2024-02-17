#include<iostream>
using namespace std;
void printbinary(int num){
    for(int i=7;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
    printbinary((int)'a');
    char A='A';
    char a=A|(1<<5);
    cout<<a;
}