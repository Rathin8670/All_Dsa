#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *first;
void create(int *arr,int size){
    first=new Node;
    first->data=arr[0];
    first->next=NULL;
    Node *last,*t;
    last=new Node;
    last=first;
    for(int i=1;i<size;i++){
        t=new Node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }
}
void display(Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
/*1.remove duplicates from linked list*/
void removeDuplicate(Node *p){
    p=first;
    Node *q=first->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }else{
            p->next=q->next;
            delete(q);
            q->next=p->next;
        }
    }

}
/*2.Reversing a linked list*/
void reverse(Node *p){
    p=first;
    Node *q=NULL;
    Node *r=NULL;
    while(p!=0){
        r=q;
        q=p;
        p=p->next;
        q->next=r;

    }
    first=q;
}
/*2.reversing ll */
Node* Reverse_linkedlist(Node *first){
    Node* prevptr=NULL;
    Node* currptr=first;
    Node* nextptr;
    while(currptr!=0){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
/*3.reverse in Recursive way*/
void Reverse(Node *q,Node *p){
    p=first;
    if(p!=0){
        Reverse(p,p->next);
        p->next=q;
    }else{
        first=q;
    }
}
/*4.check for loop in linked list*/
int isLoop(Node *f){
    Node *p,*q;
    // do{
    //     p=p->next;
    //     q=q->next;
    //     q=q!=NULL?q->next:NULL;

    // }while(p&&q);
    // return p==q?1:0;
    while(q!=NULL && q->next!=NULL){
        p=p->next;
        q=q->next->next;
        if(p==q)
        return 1;
    }
    return 0;
}
/*5.*/
int main(){
    int arr[]={1,2,3,4,5};
    create(arr,5);
    display(first);
  
    //removeDuplicate(first);
   // reverse(first);
   Node* ans=Reverse_linkedlist(first);
    display(ans);
     cout<<isLoop(first);
   
}