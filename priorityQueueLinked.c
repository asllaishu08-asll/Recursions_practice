#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    int priority;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void insert(int val,int pri){
    if(front==NULL&&rear==NULL){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->val=val;
        ptr->priority=pri;
        front=rear=ptr;
        ptr->next=NULL;
    }
    else if(front->priority>pri){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->val=val;
        ptr->priority=pri;
        ptr->next=front;
        front=ptr;
    }
    else{
        struct node*ptr=front;
        struct node*p=(struct node*)malloc(sizeof(struct node));
        p->priority=pri;
        p->val=val;
        while(pri>ptr->priority){
        ptr=ptr->next;
        }
        p->next=ptr->next;
        ptr->next=p;
    }
}
void delete(){
    struct node* ptr=front;
    front=front->next;
    free(ptr);
}
void display(){
    struct node* ptr=front;
    while(ptr!=NULL){
        printf("%d , %d ",ptr->val,ptr->priority);
        ptr=ptr->next;
    }
}
int main(){
    insert(10,3);
    insert(20,2);
    insert(30,2);
    insert(40,0);
    delete();
    display();
    return 0;
}