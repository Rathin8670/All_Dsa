#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
class List{
    Node *tail;
    public:
    List(){
        tail=NULL;
    }
    void insertBeg(int);
    void insertEnd(int);
    void deleteBeg();
    void deleteEnd();
    void display();
};

void List::insertBeg(int item){
    Node* temp=new Node;
    temp->data=item;
    if(!tail){
        tail=temp;
        temp->next=tail;
        return;
    }
    temp->next=tail->next;
    tail->next=temp;
}

void List::insertEnd(int item){
    Node* temp=new Node;
    temp->data=item;
    if(!tail){
        temp->next=tail;
        tail=temp;
    }
    temp->next=tail->next;
    tail->next=temp;
    tail=temp;
    
   }
void List::deleteBeg(){
    //for empty list
    if(!tail){
        cout<<"Not";
        return;
    }
    //for single list
    if(tail->next==tail){
        tail=NULL;
        cout<<"Ok";
        return;
    }
    Node* temp=tail->next;
    tail->next=temp->next;
    delete temp;

}
void List::deleteEnd(){
    //for empty list
    if(!tail){
        cout<<"Not";
        return;
    }
    //for single list
    if(tail->next==tail){
        tail=NULL;
        cout<<"done";
        return;
    }
    Node* curr=tail->next;     //initialize with first node        
    while(curr->next!=tail){
        curr=curr->next;
    }
    Node* temp=curr->next;
    curr->next=tail->next;
    tail=curr;
    delete temp;
}

void List::display(){
    if(!tail){
        return;
    }
    Node* temp=tail->next;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail->next);
}
int main(){
    List l1;
    l1.insertBeg(10);
    //l1.insertBeg(20);
   // l1.insertEnd(30);
   // l1.deleteEnd();
    l1.deleteBeg();
    l1.display();
}