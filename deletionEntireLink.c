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
void deleteentire(struct Node* head){
    struct Node* ptr;
    struct Node* temp = head;

    while(temp != NULL){
        ptr = temp;
        temp = temp->next;
        free(ptr);
    }

    
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
    printf("\n List before deletion\n");
    linked(head);
    printf("\n List after deletion\n");
   deleteentire(head);
    linked(NULL);
    return 0;
}