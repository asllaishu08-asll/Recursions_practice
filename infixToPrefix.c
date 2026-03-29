#include<stdio.h>
#include<string.h>
#define max 10
char stack[max];
int top=-1;
void push(char ch){
    stack[++top]=ch;
}
int pop(){
    return stack[top--];
}
int peek(){
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
    printf("\n Enter infix expression : ");
    char infix[max],prefix[max];
    scanf("%s",infix);
    int j=0;
    char rev[max];
    for(int i=strlen(infix)-1;i>=0;i--){
        if(infix[i]=='(')
        rev[j++]=')';
        else if(infix[i]==')')
        rev[j++]='(';
        else
    rev[j++]=infix[i];
    }
    rev[strlen(infix)]='\0';
    int p=0;
    for(int k=0;k<strlen(rev);k++){
        if(isOperand(rev[k])){
        prefix[p++]=rev[k];
        }
        else if(rev[k]=='('){
            push(rev[k]);
        }
        else if(rev[k]==')'){
            while(top!=1&&peek()!='('){
                prefix[p++]=pop();
            }
            pop();
        }
        else {
        while(top!=-1&& preceedence(peek())>=preceedence(rev[k])){
            prefix[p++]=pop();
        }
       push(rev[k]);
    }
}
 while(top!=-1)
    prefix[p++]=pop();
    prefix[p]='\0';
    char final[max];
    int b=0;
    for(int a=strlen(prefix)-1;a>=0;a--){
     final[b++]=prefix[a];
    }
    final[b]='\0';
    printf("\n Prefix is : %s",final);
return 0;
}