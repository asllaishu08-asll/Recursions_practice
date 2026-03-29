#include<stdio.h>
#include<stdlib.h>
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
void dup(int k){
    struct node* ptr=head;
    int a=0;
    for(int i=1;i<=count;i++){
        if(ptr->data==k)
        a++;
        ptr=ptr->next;
    }
    printf("\n Number of times %d is repeating is %d",k,a);
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
    createnode(10);
    createnode(10);
    createnode(40);
    createnode(50);
    createnode(60);
    display();
    dup(10);
    return 0;
}