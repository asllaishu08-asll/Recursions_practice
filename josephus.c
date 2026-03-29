#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
int main(){
    int n;
    printf("\n Enter the number of people need to participate: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=i;
        if(head==NULL){
        head=ptr;
        ptr->next=head;
        }
        else{
            struct node*p=head;
            while(p->next!=head){
              p=p->next;
            }
            p->next=ptr;
            ptr->next=head;
        }
    }
    int k;
    printf("\n Enter k: ");
    scanf("%d",&k);
int a=deleteKnode(k);
printf("%d \n",a);
return 0;
}
int deleteKnode(int k)
{
    struct node *p = head;
    struct node *prev = NULL;

    while(p->next != p)
    {
        for(int i=1;i<k;i++)
        {
            prev = p;
            p = p->next;
        }

        prev->next = p->next;

        if(p == head)
            head = p->next;

        free(p);

        p = prev->next;
    }

    return p->data;
}