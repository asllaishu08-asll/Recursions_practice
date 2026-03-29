#include<stdio.h>
#include<string.h>
#define max 10
char stack[max];
char top=-1;
void push(char ch){
    stack[++top]=ch;
}
char pop(){
    return stack[top--];
}
char peek(){
    return stack[top];
}
int isOperand(char ch){
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
    return 1;
    return 0;
}
int preceedence(char ch){
    if(ch=='^')
    return 3;
    if(ch=='*'||ch=='/'||ch=='%')
    return 2;
    if(ch=='+'||ch=='-')
    return 1;
    return 0;
}
int main(){
    char  infix[max],postfix[max];
    int i,j=0;
    printf("\n Enter any expression: ");
    scanf("%s",infix);
    for( i=0;infix[i]!=0;i++){
    if(isOperand(infix[i]))
    postfix[j++]=infix[i];
    else if(infix[i]=='('){
    push(infix[i]);
    }
    else if(infix[i]==')'){
        while(peek()!='(')
        postfix[j++]=pop();
         pop();
    }
    else{
        while(top!=-1&&preceedence(peek())>=preceedence(infix[i])){
            postfix[j++]=pop();
        }
        push(infix[i]);
    }
    }
     while(top!=-1)
    postfix[j++]=pop();
    postfix[j]='\0';
    printf("\n Postfix expression is : %s",postfix);
    return 0;
 }
