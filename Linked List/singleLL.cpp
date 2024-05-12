#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class List{
    Node *head;
    public:
    List(){
        head=NULL;
    }
    void addBeg(int);
    void addEnd(int);
    void deleteBeg();
    void deleteEnd();
    void display();
};
void List::addBeg(int item){

    Node* temp=new Node;
    temp->data=item;
    temp->next=head;
    head=temp;
}
void List::addEnd(int item){
    Node* temp=new Node;
    temp->data=item;

    if(!head){
       head=temp;
       temp->next=NULL;
    }

    Node* curr=head;
    while(curr->next)
        curr=curr->next;
    curr->next=temp;
    temp->next=NULL;
}
void List::deleteBeg(){
    if(!head){
        cout<<"NOt possible\n";
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}
void List::deleteEnd(){
    //for null list
    if(!head){
        cout<<"Not Possible\n";
    }
    //for single element list
    if(!head->next){
       delete head;
       head=NULL;
       return;
    }

    Node* curr=head;
    //move until second last
    while(curr->next->next){
        curr=curr->next;
    }
    Node* temp=curr->next;
    delete temp;
    curr->next=NULL;
}

void List::display(){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    List ll;
    ll.addBeg(10);
    // ll.addEnd(20);
    // ll.addBeg(5);
    // ll.addEnd(30);
    ll.deleteEnd();
    ll.display();

}