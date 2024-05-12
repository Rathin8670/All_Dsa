/*  Input: str = “geeks for geeks geeks quiz practice qa for”;
 Frequencies of individual words are
            */
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    map<string,int>m;
    int n;
    cout<<" enter size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;

    }

    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

}