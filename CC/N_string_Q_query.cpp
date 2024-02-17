#include<bits\stdc++.h>
using namespace std;
int main(){
    unordered_set<string>s;
    int n;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<"q=";
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
}