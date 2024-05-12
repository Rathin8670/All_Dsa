#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
class queue{
    node* front;
    node* rear;
    public:
    queue(){
        front=rear=NULL;
    }
    void enqueue(int);
    void dequeue();
    void display();
};
void queue::enqueue(int val){
    node* t=new node;
    if(!t){
        cout<<"queue overflow\n";
        return;
    }
    t->data=val;
    t->next=NULL;
    // If queue is empty, then
  // new node is front and rear both
    if(!rear)
    front=rear=t;
    else{
        rear->next=t;
        rear=t;
    }

}
void queue::dequeue(){
    if(front==NULL){
        cout<<"queue is empty\n";
        return;
    }
    node* temp=front;
    front=front->next;
    // If front becomes NULL, then
    // change rear also as NULL
    if(!front){
        rear=NULL;
    }
    delete temp;
}
void queue::display(){
    
    while(front!=NULL){
        cout<<front->data<<" ";
        front=front->next;
    }
}
int main(){
    queue q;
    q.enqueue(10);q.enqueue(20);q.enqueue(30);
  
     q.dequeue();
     q.dequeue();
     q.enqueue(89);
     q.enqueue(90);
     q.dequeue();

    q.display();
}
