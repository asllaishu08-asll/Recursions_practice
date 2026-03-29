#include<stdlib.h>
#include<stdio.h.>
struct node{
    int data;
    struct node* next;
};
int count=0;
struct node*head=NULL;
void createnode(int val){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
if(head==NULL){
head=ptr;
ptr->next=NULL;
count++;
}
else{
  struct node*p;
  p=head;
  while(p->next!=NULL){
    p=p->next;
  }  
  p->next=ptr;
  ptr->next=NULL;
  count++;
}
}
void middleNode(){
int mid;
if(count%2==0){
    mid=(count/2)+1;
    struct node* ptr=head;
    for(int i=1;i<mid;i++){
        ptr=ptr->next;
    }
    printf("\n Middle node data is %d",ptr->data);
}
else{
    mid=(count/2)+1;
    struct node* ptr=head;
     for(int i=1;i<mid;i++){
        ptr=ptr->next;
    }
    printf("\n Middle node data is %d",ptr->data);
}
}
void display(){
    struct node*ptr=head;
    while(ptr!=NULL){
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    createnode(10);
    createnode(20);
    createnode(30);
    createnode(40);
    createnode(50);
    createnode(60);
    createnode(70);
    display();
    middleNode();
    return 0;
}