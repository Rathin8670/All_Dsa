#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a%b==0)
    return b;
    return gcd(b,a%b);
}
int main(){
    int a=18,b=12;
    cout<<gcd(a,b)<<endl;
    int lcm=(a*b)/gcd(a,b);
    cout<<lcm;

}