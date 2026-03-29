#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void linked(struct Node* ptr){
    while(ptr!=NULL){
        printf("\n Element %d",ptr->data);
        ptr=ptr->next;
    }
}
struct Node* insertfirst(struct Node* head, int data){
struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->next=head;
ptr->data=data;
return ptr;
}
struct Node* insertindex(struct Node* head,int data, int index){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;  
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    return head;
}
struct Node* insertend(struct Node* head, int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;  
    while(p->next!=NULL)
    p=p->next;
    ptr->next=NULL;
    p->next=ptr;
    ptr->data=data;
    return head;
}
struct Node* insertionnode(struct Node* head,struct Node* p,int data){
struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->next=p->next;
p->next=ptr;
ptr->data=data;
return head;
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=12;
    second->next=third;
    third->data=56;
    third->next=NULL;
 //   linked(head);
//  head=insertfirst(head,56);
//  linked(head);
// head=insertindex(head,100,3);
// linked(head);
// head=insertend(head,29);
// linked(head);
head=insertionnode(head,head,48);
linked(head);
    return 0;
}