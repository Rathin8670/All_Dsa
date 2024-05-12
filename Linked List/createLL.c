#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first;
void create(int arr[],int n){
struct Node *t,*last;
first=(struct Node*)malloc(sizeof(struct Node));
first->data=arr[0];
first->next=NULL;
last=first;
for(int i=1;i<n;i++){
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=arr[i];
    t->next=NULL;
    last->next=t;
    last=t;
    } 
}
void display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    int arr[]={3,4,5,6,7};
    create(arr,5);
    display(first);
    return 0;

}