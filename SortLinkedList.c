#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
}node;
void sort(node*a,int n){
    
    for(int i=0;i<n;i++){
        node*ptr=a;
    while(ptr->next!=NULL){
       
        if(ptr->next->data<ptr->data){
       int temp=ptr->data;
       ptr->data=ptr->next->data;
       ptr->next->data=temp;
        }
        ptr=ptr->next;
    }
}
}
void display(node* a){
node*ptr=a;
while(ptr!=NULL){
    printf("%d ",ptr->data);
    ptr=ptr->next;
}
}
int main(){
    int n=6;
    node*a=(node*)malloc(sizeof(node));
    node* b=(node*)malloc(sizeof(node));
    node*c=(node*)malloc(sizeof(node));
     node*d=(node*)malloc(sizeof(node));
      node*e=(node*)malloc(sizeof(node));
       node*f=(node*)malloc(sizeof(node));
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=NULL;
    a->data=100;
    b->data=25;
    c->data=85;
    d->data=28;
    e->data=87;
    f->data=8;
    sort(a,n);
    display(a);
}