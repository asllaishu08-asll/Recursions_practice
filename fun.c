#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void insert(int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(front==NULL){
    front=ptr;
    rear=ptr;
    ptr->next=NULL;
    }
    else{
        rear->next=ptr;
        rear=ptr;
        rear->next=NULL;
    }
}
void delete(){
    if(front==NULL){
        printf("\n Queue is empty");
    }
    else{
        struct node* ptr=front;
        front=front->next;
        printf("\n Deleting value is %d",ptr->data);
        free(ptr);
    }
}
void peek(){
     if(front==NULL){
        printf("\n Queue is empty");
    }
    else{
        printf("\n front value is %d",front->data);
    }
}
void display(){
     if(front==NULL){
        printf("\n Queue is empty");
    }
    else{
        struct node*ptr=front;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}
int main(){
insert(10);
insert(20);
insert(30);
insert(40);
insert(50);
insert(60); 
delete();
printf("\n");
display();   
}