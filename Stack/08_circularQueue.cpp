#include<iostream>
using namespace std;
class queue{
    int size;
    int rear;
    int front;
    int *arr;
    public:
    queue(int s){
        front=rear=-1;
        size = s;
        arr = new int[s];
    }
    void enqueue(int);
    void dequeue();
    int Ffront(){
        return arr[front];
    }
};
void queue::enqueue(int item){
    //full cond
    if((front==0 && rear==size-1 )||((rear+1)%size==front)){
        cout<<"QUEUE IS FULL\n";
    }

    //insert 1st element
    if(front==-1){
        front=rear=0;
        arr[rear]=item;
    }
    else if(rear==size-1 && front!=0){
        rear=0;
        arr[rear]=item;
    }else{
        rear++;
        arr[rear]=item;
    }
}
void queue::dequeue(){
    //for 1 element queue
    if(front==rear){
        front=rear=-1;
    }else if(front==size-1){
        front=0;
    }else{
        front++;
    }
}
int main(){
    queue c1(5);
    c1.enqueue(12);c1.enqueue(11);c1.enqueue(19);c1.enqueue(129);
    c1.dequeue();
    cout<< c1.Ffront();

}