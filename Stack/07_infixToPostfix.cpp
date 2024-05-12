#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int isOperend(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^'||x=='('||x==')'){
        return 0;
    }else
    return 1;
}
int outpre(char x){
    if(x=='+'||x=='-')
    return 1;
    else if(x=='*'||x=='/')
    return 3;
    else if(x=='^')
    return 6;
    else if(x=='(')
    return 7;
    else if (x==')')
    return 0;

}
int inpre(char x){
    if(x=='+'||x=='-')
    return 2;
    else if(x=='*'||x=='/')
    return 4;
    else if(x=='^')
    return 5;
    else if(x=='(')
    return 0;
    
    return -1;

}
/*infix to postfix*/
char* convert(char *infix){
    stack<char>stk;
    int i=0,j=0;
    char *postfix=new char[strlen(infix)];

    while(infix[i]!='\0'){
        if(isOperend(infix[i]))
        postfix[j++]=infix[i++];
        
        else{
            if(stk.empty()||outpre(infix[i])>inpre(stk.top()))
            stk.push(infix[i++]);
            else if(outpre(infix[i])==inpre(stk.top()))
            stk.pop();
            else{
                postfix[j++]=stk.top();
                stk.pop();
                }
        }
    }
    //for rest elements
    while(!stk.empty() && stk.top()!=')'){
        postfix[j++]=stk.top();
        stk.pop();
    }
    postfix[j]='\0';
    return postfix;
}

//=================================//
/*evaluation of postfix string*/
int evaluation(char *str){
    stack<int>st;
    int x1,x2,r;
    for(int i=0;str[i]!='\0';i++){

        if(isOperend(str[i]))
        st.push(str[i]-'0');  //if we not substract '0'=48(in ascii) it will push ascaii code of str[i] 

        else{      //for operator e.g: +,-,...
            x2=st.top();
            st.pop();
            x1=st.top();
            st.pop();
            switch(str[i]){
                case '+': r=x1+x2;
                    st.push(r);
                    break;
                case '-': r=x1-x2;
                    st.push(r);
                    break;
                case '*': r=x1*x2;
                    st.push(r);
                    break;
                case '/': r=x1/x2;
                    st.push(r);
                    break;
                case '^': r=x1^x2;
                    st.push(r);
                    break;
            }
        }
    }
    return st.top();
}
int main(){
   // char str[]="3*5+6/2-4";
    char *str=new char[100];
    cin>>str;
    cout<<convert(str)<<endl;
    cout<<evaluation(convert(str));
}