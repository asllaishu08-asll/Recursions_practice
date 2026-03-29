#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack* next;
};
struct stack* top=NULL;
struct stack* push(struct stack* top ,int val){
    struct stack* ptr=(struct stack*)malloc(sizeof(struct stack));
    ptr->data=val;
    if(top==NULL){
    ptr->next=NULL;
    top=ptr;
    }
    else{
        ptr->next=top;
        top=ptr;
    }
    printf("\n pushed value is %d",top->data);
}
struct stack* pop(struct stack* top){
    struct stack*ptr=top;
    if(top==NULL)
    printf("\n stack is empty");
    else{
    top=ptr->next;
    free(ptr);
    }
}
int peek(struct stack* top){
    if(top==NULL)
    printf("\n stack is empty");
    else{
        printf("%d",top->data);
    }
}
int main(){
printf("\n 1. push");
printf("\n 2. pop");
printf("\n 3.peek");
int n;
printf("\n enter a case: ");
scanf("%d",&n);
if(n==1){
    int val;
    printf("\n enter value:");
    scanf("%d",&val);
    push(top,val);
}
else if( n==2){
pop(top);
}
else if(n==3){
    peek(top);

}
return 0;
}
