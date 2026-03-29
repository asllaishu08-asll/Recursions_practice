#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void check(struct node* head){
    struct node* temp=head;
    if(head==NULL){
        printf("\n Link is empty");
    }
    else{
        while(1){
        temp=temp->next;
        if(temp==NULL){
            printf("\n Singly linked list");
            break;
        }
        else if(temp->next==head){
            printf("\n Circular linked lilst ");
            break;
        }
        }
    }
}
int main(){
   struct node*first=(struct node*)malloc(sizeof(struct node));
   struct node*second=(struct node*)malloc(sizeof(struct node));
   struct node*third=(struct node*)malloc(sizeof(struct node));
   struct node*fourth=(struct node*)malloc(sizeof(struct node));
   first->data=10;
   first->next=second;
   second->data=20;
   second->next=third;
   third->data=30;
   third->next=fourth;
   fourth->data=40;
   fourth->next=first;
   check(first);
}