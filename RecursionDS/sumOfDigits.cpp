#include<iostream>
using namespace std;
int fun(int n){
  
    if(n==0){
        return 0;
    }
    return n%10 +fun(n/10);
}
int main(){
    int n=12099879;
    cout<<fun(n);
    return 0;
}