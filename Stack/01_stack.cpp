#include<iostream>
using namespace std;
class stack{
    int top;
    int *arr;
    public:
    int size;
    stack(){
        top=-1;
    }
    bool isEmpty();
    bool isFull();
    void push(int);
    int pop();
    void peek();
    void display();
};
bool stack:: isEmpty(){
    if(top==-1)
    return 1;
    return 0;
    
}
bool stack:: isFull(){
    if(top==size-1){
    return 1;
    }
    return 0;
}
void stack::push(int item){
    if(isFull()){
        cout<<"Not possible\n";
    }else{
        top++;
        arr[top]=item;
    }
}
int stack::pop(){
    int x=-1;
    if(isEmpty()){
        cout<<"Not possible\n";
    }else{
        x=arr[top];
        top--;
    }
    return x;
}
void stack::peek(){
    cout<<arr[top]<<endl;
}
void stack::display(){
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    stack st;
    st.size=5;
    st.push(7);st.push(9);st.push(19);st.push(27);
    st.pop();
    st.peek();
    st.display();

}