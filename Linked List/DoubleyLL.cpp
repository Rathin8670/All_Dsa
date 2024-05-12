#include<iostream>
using namespace std;

class Node{
    public:
    Node *prev;
    int data;
    Node *next;
}*first;
void create(int arr[],int n){
    first=new Node;
    Node *t,*last;
    first->data=arr[0];
    first->prev=first->next=NULL;
    last=new Node;
    last=first;
    
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=arr[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }

}
void display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void insert(Node *p,int x,int pos){
    Node *t=new Node;
    if(pos==0){
        t->data=x;
        t->next=first;
        t->prev=NULL;
        first->prev=t;
        first=t;
    }else{
        for(int i=0;i<pos-1;i++){
           p=p->next;
        }
         t->data=x;
         t->next=p->next;
         t->prev=p;
         p->next->prev=t; /*check cond if(p->next!=0){===}*/
         p->next=t;
    }

}
/*deleting a node*/
int DeleteNode(Node *p,int pos){
    //for deleting first node
    
     int x;
    if(pos==1){
        p=first;
        first=first->next;
        if(first!=0)
        first->prev=NULL;
         x=p->data;
        delete(p);
       
        
    }else{
        for(int i=0;i<pos-1;i++)
        p=p->next;
        p->prev->next=p->next;
        if(p->next!=0)
        p->next->prev=p->prev;
         x=p->data;
        delete(p);
    }
    return x;
}
void reverse(Node *p){
    p=first;
    Node *temp;
    while(p){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
         // Need to check the following condition again
        if (p->next == NULL){
            p->next = p->prev;
            p->prev = NULL;
            first = p;
            break;
              }

        }
    }
    void incertDLL(Node *p,int x,int pos){
    p=first;
    Node *t=new Node;
    t->data=x;
    t->next=t->prev=NULL;
    if(pos==0){
        //for null list
        if(first==NULL){
            first=t;
            t->prev=first;
            t->next=first;
        }else{
            t->next=p;
            t->prev=p->prev;
            p->prev=t;
            t->prev->next=t;
            first=t;
        }
    }
}
int main(){
    int arr[]={2,3,4,5,6,7};
    create(arr,6);
    display(first);
    //insert(first,10,2);
   //cout<< DeleteNode(first,3)<<endl;
 //  reverse(first);
 incertDLL(first,8,0);
    display(first);
}