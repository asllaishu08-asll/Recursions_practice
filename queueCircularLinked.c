#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
node* front=NULL;
node* rear=NULL;
void insert(int val){

    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = val;

    if(front == NULL){
        front = rear = ptr;
        rear->next = front; 
    }
    else{
        rear->next = ptr;
        rear = ptr;
        rear->next = front;   
    }

    printf("\n Inserted value is %d", rear->data);
}
void delete(){

    if(front == NULL){
        printf("\n Queue is already empty");
        return;
    }

    if(front == rear){
        printf("\n Deleted element is %d", front->data);
        free(front);
        front = rear = NULL;
    }
    else{
        node* ptr = front;
        printf("\n Deleted element is %d", ptr->data);

        front = front->next;
        rear->next = front;   
        free(ptr);
    }
}
void peek(){
     if(rear==NULL&&front==NULL){
        printf("\n Queue is already empty");
    }
    else{
        printf("\n first element is %d",front->data);
    }
}
void display(){
     if(rear==NULL&&front==NULL){
        printf("\n Queue is already empty");
    }
    else{
        node* ptr=front;
       do{
            printf("%d ",ptr->data);
            ptr=ptr->next;
        } while(ptr!=front);
    }
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    
     peek();
    
   
    peek();
    printf("\n");
    display();
    return 0;
}