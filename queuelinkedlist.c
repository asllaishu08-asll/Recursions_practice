#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int data;
   struct queue* next;
}queue;
queue* front=NULL;
queue* rear=NULL;
void insertion(int val){
queue* ptr=(struct queue*)malloc(sizeof(struct queue));
ptr->data=val;
if(front==NULL&&rear==NULL){
    front=ptr;
    rear=ptr;
}
else{
    rear->next=ptr;
    ptr->next=NULL;
    rear=ptr;
}
printf("\n Inserted value is %d",rear->data);
}
void delete(){
    if(front==NULL&&rear==NULL)
    printf("\n queue is empty");
    else{
        queue* ptr;
        ptr=front;
        front=front->next;
        printf("\n Deleted value is %d",ptr->data);
        free(ptr);
    }
}
void peek(){
    if(front==NULL&&rear==NULL)
    printf("\n Queue is empty");
    else{
        queue* ptr;
        ptr=front;
        printf("\n First element is %d",ptr->data);
    }
}
void display(){
    if(front!=NULL){
    queue*ptr=front;
    while(ptr!=NULL){
        printf(" %d",ptr->data);
        ptr=ptr->next;
    }
}
else
printf("\n Queue is empty");
}
int main(){
    insertion(10);
    insertion(20);
    insertion(30);
    insertion(40);
    insertion(50);
    delete();
    peek();
    printf("\n");
    display();
    return 0;
}