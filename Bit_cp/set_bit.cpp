#include<iostream>
using namespace std;
void printBinary(int num){
    for(int i=7;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
    // printBinary(int('A'));
    // printBinary(int('a'));
    int a=7;
    printBinary(a);
    int i=2;
    int j=1;
    if((a&(1<<i))!=0){
        cout<<"Set Bit\n";
    }else{
        cout<<"Not set bit\n";
    }
    //make set bit
    printBinary(a|(1<<j));
    //toggle a bit.....means-->>..0->1......1->0
    printBinary(a^(1<<3));
    //make unset bit
    printBinary(a&(~(1<<j)));

}