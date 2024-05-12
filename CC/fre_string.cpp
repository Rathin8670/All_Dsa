#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>m;
    int n;
    cout<<" enter N=";
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;

    }
    int q;
    cout<<"\nQ=";
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
}
