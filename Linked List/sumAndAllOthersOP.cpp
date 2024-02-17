#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class Node *first;
//1.creating a linked list
void create(int *arr,int n){
    first=new Node;
    first->data=arr[0];
    first->next=NULL;
    Node *t,*last;
    last=new Node;
    last=first;
   
    for(int i=1;i<n;i++){
         t=new Node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
/*2.displaying a linked list*/
void display( Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
/*3.finding length*/
int nCount( Node *p){
    int c=0;
    while(p!=0){
        c++;
        p=p->next;
    }
    return c;
}
/*4.recursively */
int rcount(Node *p){
    if(p==0)
    return 0;
    return rcount(p->next)+1;
}
//5.sum
int add(Node *p){
    int sum=0;
    while(p){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}
//6.linear search
Node* search(Node *p,int key){
    while(p!=0){
        if(p->data==key)
        return p;
        p=p->next;
    }
    return 0;
}
//7.recursive func for searching
Node* rSearch(Node *p,int key){
    if(p==0)    //base cond.
    return 0;
    if(key==p->data)
    return p;
    return search(p->next,key);

}
//8.insert an node 
void insert(Node *p,int pos,int x){
    Node *t;
    if(pos<0 ||pos>nCount(first))
    return ;
    if(pos==0){     /*before 1st index*/
        t=new Node;
        t->data=x;
        t->next=first;
        first=t;
    }else if(pos>0){
      
        for(int i=0;i<pos-1;i++)
            p=p->next;

            t=new Node;
            t->data=x;
            t->next=p->next;
            p->next=t;

        }
    }
/*9.insert in a sorted list*/
void sInsert(Node *p,int x){
   
    Node *t=new Node;
    Node *q=NULL;
    t->data=x;
    t->next=NULL;
    /*for no element in a list*/
    if(first==NULL){
        first=t;
    }else{
        while(p&& p->data<x){
            q=p;
            p=p->next;

        }
        //if it is first node then it is import in left side
        if(p==first){
          t->next=first;
          first=t; 
        }else{
            t->next=q->next;
            q->next=t;

        }
    }
     
}
/*10.deleting a node */
int Delete(Node *p,int x){
    Node *q;
    p=new Node;
    int y;
    if(x==1){
        y=first->data;
        p=first;
       first=first->next;
        delete(p);
        
    }else{
        p=first;
        q=NULL;
        for(int i=0;i<x-1&&p;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        y=p->data;
        delete(p);
    }
    return y;
}
/*11.check if list is sorted or not*/
int isSorted(Node *p){

    Node *q=p->next;
   int x=-32728;

    while(p!=0){
        if(p->data<x){
        return 0;
        break;
        }else{
          x=p->data;
            p=p->next;
        }
    }
    return 1;
}


int main(){
    int arr[]={12,3,46};
    create(arr,3);
    display(first);cout<<endl;
  
   // cout<<nCount(first)<<endl;
   // cout<<rcount(first)<<endl;
    //cout<<rSearch(first,2)<<endl;
   // insert(first,5,19);  display(first); cout<<endl;
//sInsert(first,6); display(first);cout<<endl;
// cout<<Delete(first,3)<<endl;
// display(first);cout<<endl;
cout<<isSorted(first)<<endl;
return 0;
}