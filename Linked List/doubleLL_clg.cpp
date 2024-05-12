#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
};
class List{
    Node* head;
    public:
    List(){
        head=NULL;
    }
    void create(int *arr,int n);
    void insertBeg(int);
    void insertEnd(int);
    void deleteBeg();
    void deleteEnd();
    void display();

};

void List::create(int *arr,int n){
    
    Node* last=new Node;
    head=new Node;
    head->data=arr[0];
    head->prev=NULL;
    head->next=NULL;
    last=head;
    
    for(int i=1;i<n;i++){
        Node* t=new Node;
        t->data=arr[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}
void List::insertBeg(int item){
    Node* temp=new Node;
    temp->data=item;
    temp->prev=NULL;
    temp->next=head;
    head=temp;
}
void List::insertEnd(int item){
    Node* temp=new Node;
    temp->data=item;
    if(!head){
        head=temp;
        temp->prev=NULL;
        temp->next=NULL;
    }
    Node* curr=head;
    while(curr->next){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    temp->next=NULL;
}
void List::deleteBeg(){
    if(!head){
        cout<<"Not possible\n";
        return;
    }
    if(!head->next){
        delete head;
        head=NULL;
        cout<<"done";
        return;
    }
    Node* t=head;
    head=head->next;
    delete t;
    
}
void List::deleteEnd(){
    if(!head){
        cout<<"NOt pos\n";
        return;
    }
    Node* curr=head;
    while(curr->next->next){
        curr=curr->next;
    }
    Node* del=curr->next;
    curr->next=NULL;
    delete del;
}
void List::display(){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    List l1;
    // int arr[]={1,2,3,4,5};
    // l1.create(arr,5);
    // int a=10,b=20;
    // l1.insertBeg(a);
    // l1.insertEnd(b);
   // l1.insertBeg(5);
    //l1.insertEnd(30);
    //l1.deleteBeg();
    // l1.deleteEnd();
   // l1.display();
    
    cout<<"1.InsertBeg\n 2. InsertEnd \n 3. DeleteBeg\n 4. DeleteEnd\n 5. Display\n 6.exit\n";
   
        int n;
       
    do{
        cout<<"enter choice=";
        cin>>n;
        switch(n){
            case 1:cout<<"enter item to add:\n";
                    int item;
                    cin>>item;
                    l1.insertBeg(item);
                    break;
            case 2:cout<<"enter item to add end:\n";
                    int item1;
                    cin>>item1;
                    l1.insertEnd(item1);
                    break;
            case 3:l1.deleteBeg();
                    break;
            case 4:l1.deleteEnd();
                    break;

            case 5:l1.display();
                    break;
            case 6:cout<<"exit from the menu";
                    break;
        }
    }while(n<6);
}