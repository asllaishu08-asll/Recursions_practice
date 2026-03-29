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
struct Node* deletefirst(struct Node* head){
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct Node* deleteindex(struct Node* head,int index){
    struct Node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct Node*ptr=head;
    int q=0;
    while(q!=index){
    ptr=ptr->next;
    q++;
    }
    p->next=ptr->next;
    free(ptr);
    return head;
}
struct Node* deleteend(struct Node*head){
    struct Node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }struct Node*q=head;
    while(q->next!=p)
    q=q->next;
    q->next=NULL;
    free(p);
    return head;
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=12;
    second->next=third;
    third->data=56;
    third->next=fourth;
    fourth->data=34;
    fourth->next=NULL;
    // head=deletefirst(head);
    // head=deleteindex(head,1);
    head=deleteend(head);
    linked(head);
    return 0;
}