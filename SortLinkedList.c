#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node* top=NULL;
void push(int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));\
    ptr->data=val;
    if(top==NULL){
    top=ptr;
    ptr->next=NULL;
    }
    else{
       ptr->next=top;
       top=ptr;
    }
    printf("\n Inserted value is %d",top->data);
}
 void pop(){
    struct node* ptr=top;
    if(top==NULL){
        printf("\n Stack is empty" );
    }
    else{
        top=top->next;
        printf("\n Poppped element is %d",ptr->data);
        free(ptr);
    }
 }
 void peek(){
    if(top==NULL){
        printf("\n Stack is empty" );
    }
    else{
        printf("\n top value is %d",top->data);
    }
 }
 void display(){
    struct node* ptr=top;
    if(top==NULL){
        printf("\n Stack is empty");
    }
    else{
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
 }
}
 int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    pop();
    pop();
    printf("\n");
    display();
 }