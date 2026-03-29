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
struct Node* reverseLink(struct Node* head){
    struct Node* temp2=head;
    struct Node* temp=NULL;
    while(head!=NULL){
temp2=head->next;
head->next=temp;
temp=head;
head=temp2;
    }
    head=temp;
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
    printf("\n Before \n");
    linked(head);
    printf("\n After \n");
    head=reverseLink(head);
    linked(head);
    return 0;
}