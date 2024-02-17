#include<bits/stdc++.h>
using namespace std;
string isbalanced(string str){
    map<char,int>symbols={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
    stack<char>st;
    for(char ch:str){
        if(symbols[ch]<0){          //for opening brackets
            st.push(ch);
        }else{                      //for closing brackets
            if(st.empty())           
            return "NO"; 
            char tp=st.top();
            st.pop();
            if(symbols[tp]+symbols[ch]!=0)
            return "NO";
        }
    }
    if(st.empty())
    return "Yes";
    else
    return "NO";
}
int main(){
    string str="{[(][)]}";
    cout<<isbalanced(str);
}
