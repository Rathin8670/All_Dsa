#include<bits/stdc++.h>
using namespace std;
vector<int> NextGE(vector<int>v){
    vector<int>nge(v.size());
    stack<int>st;
    for(int i=0;i<v.size();i++){
        while(!st.empty() && v[i]>v[st.top()]){
            nge[st.top()]=i;
        }
        st.push(i);         //index push kr6i not value
    }
    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();
    }
    return nge;
}
int main(){
    vector<int>v{4,5,2,25,7,8};
    vector<int>ans=NextGE(v);
    for(int i=0;i<v.size();i++){
        cout<<(ans[i]==-1)?-1:v[ans[i]]<<" ";
    }
    cout<<"dd";
}