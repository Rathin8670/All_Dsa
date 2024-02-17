#include<iostream>
using namespace std;
struct stack{
    int top;
    int size;
    int *arr;
};
void create(struct stack *st){
    cout<<"enter size:"<<endl;
    cin>>st->size;
    st->top=-1;
    st->arr=new int[st->size];
}
void display(struct stack st){
    for(int i=st.top;i>=0;i--)
    cout<<st.arr[i]<<" ";

}
void push(struct stack *st,int x){
    if(st->top==st->size-1){
        cout<<"stack overflow  ";
        
    }else{
        st->top++;
        st->arr[st->top]=x;
    }
}
int pop(struct stack *st){
    int x=-1;
    if(st->top==-1)
   return x;
    else{
        x=st->arr[st->top];
        st->top--;
    }
    return x;
}


int main(){
struct stack st;
create(&st);
push(&st,1);
push(&st,2);push(&st,3);push(&st,4);push(&st,5);
display(st);
cout<<endl;
cout<<pop(&st)<<endl;
display(st);
}