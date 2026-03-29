#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void reverseAdj(){
    struct node* p=head;

    while(p!=NULL && p->next!=NULL){
        int temp=p->data;
        p->data=p->next->data;
        p->next->data=temp;

        p=p->next->next;
    }
}
void read(){
    struct node*p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
void insertStart(int val){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(head==NULL){
    head=ptr;
    ptr->next=NULL;
    }
    else{
    struct node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    }
}
int main(){
    insertStart(10);
    insertStart(20);
    insertStart(30);
    insertStart(40);
    insertStart(50);
    read();
    reverseAdj();
    read();
}