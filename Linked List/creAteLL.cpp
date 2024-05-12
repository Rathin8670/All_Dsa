#include<iostream>
using namespace std;
class Node{         //struct Node{
    public:         //  int data;
    int data;       // struct Node *next;
    Node *next;     //};
};                  //struct Node *first;
class Node *first;
void create(int *arr,int n){
    first =new Node; //
    first->data=arr[0];
    first->next=NULL;
    Node *t,*last;
    last =new Node;
    last=first;  //linking last node to the first node

    for(int i=1;i<n;i++){
        t=new Node;         
        t->data=arr[i];
        t->next=NULL;
        last->next=t;           //linking last node add to temp's first node add
        last=t;             //linking temp node to the last node
    }
}
void display(Node *p){
    
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
       
    }

}
int main(){
    int arr[]={2,3,4,5,6};
    create(arr,5);
    display(first);
    return 0;
}