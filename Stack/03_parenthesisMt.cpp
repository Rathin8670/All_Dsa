#include<iostream>
#include<string.h>
using namespace std;
struct stack{
    int size;
    int top;
    char *s;
};

void push( struct stack *st,char ch){
   // struct stack *st;
    if(st->top==st->size-1)
    return ;
    else{
        st->top++;
        st->s[st->top]=ch;
    }
}
void pop(struct stack *st){
   
    int x=-1;
    if(st->top==-1)
    return ;
    else{
        x=st->s[st->top];
        st->top--;

    }
}
int isEmpty(struct stack st){
   
    if(st.top==-1)
    return 1;
    else
    return 0;
}
int isTop(struct stack st){
    if(st.top==-1)
    return -1;
    else
    return st.s[st.top];

}
//only for parenthesis matching
int isMatching(char *str){
    //initialize a stack
    struct stack t;
    t.size=strlen(str);
    t.top=-1;
    t.s=new char[t.size];

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='(')
        push(&t,str[i]);
        else if(str[i]==')'){
            if(isEmpty(t))
            return 0;
            else
            pop(&t);
        }

    }
    return isEmpty(t)?1:0;

}
//more comlpex matching e.g--3 types 

int isMatch(char *str){
     struct stack tt;
    tt.size=strlen(str);
    tt.top=-1;
    tt.s=new char[tt.size];
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==40 || str[i]==91 ||str[i]==123){
            push(&tt,str[i]);
        }
        else if(str[i]==41 || str[i]==93 ||str[i]==125){
            if(isEmpty(tt)) return 0;

            if((int)isTop(tt)+1==(int)str[i] || (int)isTop(tt)+2==(int)str[i] ){
                pop(&tt);
            }
        }
    }
    return isEmpty(tt)?1:0;
}


int main(){
    
    char str[]="{([a+b)*(c-d]]/e}";
   // cout<<isMatching(str)<<endl;
    cout<<isMatch(str);
    

}