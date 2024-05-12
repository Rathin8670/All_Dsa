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
    //set store only unique elements so just print the set values
    cout<<"unique elements are:"<<endl;
    for(auto val:s){
        cout<<val<<endl;
    }

}