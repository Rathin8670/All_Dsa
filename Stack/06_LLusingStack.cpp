#include<iostream>
#include<cstring>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*top;

void display(Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;

    }
    cout<<endl;
}
void push(int x){
    
   Node *t=new Node;
   if(t){
   t->data=x;
   t->next=top;
   top=t;
    }else{
        cout<<"Stack overflow";
    }
}
char pop(){
   char x;
    Node *p=new Node;
    if(top==NULL)
    return x;
    else
    {
        p=top;
        top=top->next;
        x=top->data;
        delete p;
    }
    return x;
    
}
int peek(int pos){
  Node *p=new Node;
  p=top;
  for(int i=0;p!=NULL && i<pos;i++){ //bcz index starts from 0 else pos-1
    p=p->next;
  }  
  if(p)
  return p->data;
  return -1;
}
int isOperand(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/')
        return 0;
    else
        return 1;
    
}
int pre(char x){
    if(x=='+'||x=='-')
    return 1;
    else if(x=='*'||x=='/')
    return 2;
}
/*infix to postfix conversation*/
char *convert(char *infix){
    int l=strlen(infix);
    char *postfix=new char[l];
    int i=0,j=0;
    while(infix[i]!='\0'){
        if(isOperand(infix[i]))
        postfix[j++]=infix[i++];
        else{
            if(top==0||pre(infix[i])>pre(top->data))
            push(infix[i++]);
            else{
                postfix[j++]=pop();
            }
        }
    }
    while(top!=0){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}
int main(){
   push(6);
   push(7);push(9);
    display(top);
    
//   cout<<peek(3);
     //pop();
    // display(top);
    // char str[]="a+b*c-d/e";
   //  cout<<convert(str);

}