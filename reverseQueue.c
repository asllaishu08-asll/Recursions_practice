#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node* front=NULL;
struct node* rear=NULL;
void insert(int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(front==NULL&&rear==NULL){
front=ptr;
rear=ptr;
front->next=NULL;
rear->next=NULL;
front->prev=NULL;
rear->prev=NULL;
    }
    else{
        rear->next=ptr;
        ptr->prev=rear;
        ptr->next=NULL;
        rear=ptr;
    }
}
void delete(){
    if(front==NULL&&rear==NULL){
        printf("\n Queue is empty");
    }
    else{
         struct node* ptr;
         ptr=front;
         front=front->next;
         front->prev=NULL;
         free(ptr);
    }
}
void display(){
     struct node* ptr;
     ptr=rear;
     while(ptr!=front->prev){
        printf("%d ",ptr->data);
        ptr=ptr->prev;
     }
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    delete();
    display();
    return 0;
}