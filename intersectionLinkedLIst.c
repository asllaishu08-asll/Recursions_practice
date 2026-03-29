#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insert(struct node** head,int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=NULL;

    if(*head==NULL){
        *head=ptr;
    }
    else{
        struct node* p=*head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=ptr;
    }
}

void intersection(struct node* head1,struct node* head2){
    struct node* i=head1;
    struct node* j=head2;
    for(i=head1;i!=NULL;i=i->next){
        for(j=head2;j!=NULL;j=j->next){
            if(i->data==j->data){
                int k=i->data;
                printf("%d ",k);
            }
        }
    }
}
int main(){
    struct node* head1=NULL;
    struct node* head2=NULL;
    insert(&head1,10);
    insert(&head1,20);
    insert(&head1,30);
    insert(&head1,40);
    insert(&head1,50);

    insert(&head2,5);
    insert(&head2,10);
    insert(&head2,15);
    insert(&head2,30);
    insert(&head2,20);
    printf("\n Common elements are: ");
    intersection(head1,head2);
}