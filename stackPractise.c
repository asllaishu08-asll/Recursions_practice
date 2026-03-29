#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack* next;
};
struct stack* top=NULL;
struct stack* push(int val){
    struct stack* ptr=(struct stack*)malloc(sizeof(struct stack));   
    ptr->data=val;
    ptr->next=top;
    top=ptr;
    printf("\n Pushed value is %d",top->data);
    return top;
    }
void pop(){
    if(top==NULL)
    printf("\n Stack is empty");
    else{
        struct stack* ptr;
        ptr=top;
        top=top->next;
         printf("\n Popped value is %d",ptr->data);
        free(ptr);
           }
}
int peek(){
    if(top==NULL)
    printf("\n Stack is empty");
return top->data;
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    int a=peek();
    printf("\n Top value is %d",a);
    return 0;
}