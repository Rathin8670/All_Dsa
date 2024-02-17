#include<iostream>
using namespace std;
void printBinary(int num){
    for(int i=7;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
    int a=11;
    printBinary(a);
    int i=3;
    int b=(a& (~((1<<i+1)-1)));
    printBinary(b);
}