#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int count=0;
struct node* head=NULL;
void delete(){
    struct node*ptr=head;
    while(ptr->next!=NULL){
        if(ptr->data==ptr->next->data){
            struct node* temp=ptr->next;
            ptr->next=temp->next;
            free(temp);
        }
        else{
            ptr=ptr->next;
        }
    }
}
void read(){
    struct node*p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
void insertStart(int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val; count=0;
if(head==NULL){
head=ptr;
count++;
ptr->next=NULL;
}
else{
    struct node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    count++;
    ptr->next=NULL;
}
}
void sort(){
    struct node* i;
    struct node* j;

    for(i=head;i!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){

            if(i->data > j->data){
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }

        }
    }
}
int main(){
    insertStart(11);
    insertStart(12);
    insertStart(11);
    insertStart(12);
    insertStart(11);
    insertStart(13);
    insertStart(12);
    read();
    printf("\n");
    sort();
    delete();
    read();
}