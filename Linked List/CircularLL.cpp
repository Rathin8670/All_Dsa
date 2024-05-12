#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first;

/*Create a circular list*/
void create(int *arr,int n){
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
/*display*/
void display(Node *p){
    p=first;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=first);

}
/*deleting a node from c ll*/
//==========================//
void Delete(Node *p,int pos){
    Node *q;
    q=new Node;
    p=first;
    if(pos==0){
        while(p->next!=first)
        p=p->next;
        q=p->next;
        p->next=q->next;
        delete q;
    }else{
        for(int i=0;i<pos-2;i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
          delete q;
    }
}
//==================//
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
    int arr[]={2,5,3,4,8};
    create(arr,5);
    display(first);
    //display(first);
    //cout<<"ds";
    //Delete(first,2);
    incertDLL(first,12,0);
    display(first);

}