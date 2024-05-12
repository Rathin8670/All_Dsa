#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *first,*second,*t;
void create1(int *arr,int n){
    first=new Node;
    first->data=arr[0];
    first->next=NULL;
    Node *last=new Node;
    last=first;
    for(int i=1;i<n;i++){
        Node *t=new Node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}
void create2(int *arr,int n){
    second=new Node;
    second->data=arr[0];
    second->next=NULL;
    Node *last=new Node;
    last=second;
    for(int i=1;i<n;i++){
        Node *t=new Node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}
void display( Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void merging(Node *p,Node *q){
    Node *last;
    if(first->data<second->data){
        t=last=first;
        first=first->next;
        last->next=NULL;
    }else{
        t=last=second;
        second=second->next;
        last->next=NULL;
    }
    while(first!=NULL && second!=NULL){
        if(first->data<second->data){
            last->next=first;
            last=first;
            first=first->next;
            last->next=NULL;

        }else{
             last->next=second;
            last=second;
            second=second->next;
            last->next=NULL;
        }
    }
    if(first!=0)last->next=first;
    else last->next=second;

}
int main(){
    int arr1[]={2,4,5,8,19};
    int arr2[]={3,4,9,10,14};
    create1(arr1,5);
    display(first);
    create2(arr2,5);
    display(second);
    merging(first,second);
    display(t);
}