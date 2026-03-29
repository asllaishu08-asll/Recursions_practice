#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void linked(struct Node* head){
    struct Node* ptr=head;
    do{
      printf("%d \n",ptr->data);
      ptr=ptr->next;
    }while(ptr!=head);
}
struct Node* insertionFirst(struct Node* head, int data){
struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=data;
struct Node*p=head;
while(p->next!=head){
    p=p->next;
}
p->next=ptr;
ptr->next=head;
head=ptr;
return ptr;
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
    fourth->next=head;
    int x;
    printf("\n Enter the number you want to insert: ");
    scanf("%d",&x);
    head=insertionFirst(head,x);
   linked(head);
    return 0;
}