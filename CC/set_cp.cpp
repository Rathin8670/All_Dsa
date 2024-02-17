#include<bits\stdc++.h>
using namespace std;
void print(set<string>&s){
    for(string val :s){
        cout<<val<<" ";
    }
}

int main(){
    set<string>s;
    s.insert("abs");
    s.insert("hjs");
    auto it=s.find("abs");
   // cout<<*it;
   print(s);
}