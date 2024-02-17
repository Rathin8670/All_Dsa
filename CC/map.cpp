#include<bits\stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="abc";
    m[5]="bcc";
    m[3]="hgf";
    m[5]="change";    //value will be changed but key not create again
    m.insert({4,"kkk"});
 

    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}