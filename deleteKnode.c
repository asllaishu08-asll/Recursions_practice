#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node*head=NULL;
void createnode(int val){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
if(head==NULL){
head=ptr;
ptr->next=NULL;
}
else{
  struct node*p;
  p=head;
  while(p->next!=NULL){
    p=p->next;
  }  
  p->next=ptr;
  ptr->next=NULL;
}
}
void deleteKnode(int k){
    struct node*ptr=head;
    struct node*p=NULL;
    while(ptr!=NULL){
        for(int i=1;i<k&&ptr!=NULL;i++){
            p=ptr;
            ptr=ptr->next;
        }
        if(ptr==NULL)
        break;
        else if(p==NULL)
        head=ptr->next;
        else{
            p->next=ptr->next;
        }
        struct node* temp=ptr;
        ptr=ptr->next;
        free(temp);
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
    deleteKnode(3);
    display();
    return 0;
}