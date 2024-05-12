#include<iostream>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int rear;
    int *a;
    Queue(){
        front=rear=-1;
    }
};
void enqueue(Queue *q,int x){
    if(q->rear==q->size-1)
    cout<<"Queue overfloW:"<<endl;
    else{
        q->rear++;
        q->a[q->rear]=x;
    }
}
int dequeue(Queue *q){
    int x=-1;
    if(q->rear==q->front)
    return x;
    else{
        q->front++;
        x=q->a[q->front];
    }
    return x;
}
void display(Queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        cout<<q.a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Queue q;
    q.size=5;
    q.a=new int[q.size];
    enqueue(&q,8);enqueue(&q,4);enqueue(&q,3);
    display(q);
    dequeue(&q);dequeue(&q);
      display(q);
}