#include<bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string,string>,vector<int>>m;
    int n;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter fn,ln,size\n";
        string fn,ln;
        int size;
        cin>>fn>>ln>>size;
        for(int j=0;j<size;j++){
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    //print the map
    for(auto &pr:m){
        auto &full_name=pr.first;
        auto &list=pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        for(auto el:list){
            cout<<el<<" ";
        }
        cout<<endl;
    }

}