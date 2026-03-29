#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max 100

int stack[max];
int top = -1;

void push(int val){
    stack[++top] = val;
}

int pop(){
    return stack[top--];
}

int isOperand(char ch){
    if(ch >= '0' && ch <= '9')
        return 1;
    return 0;
}

int main(){
    char post[max];
    printf("Enter postfix expression: ");
    scanf("%[^\n]s", post);
int i=0;
    while(post[i]!='\0'){
        if(post[i]==' '){
            i++;
            continue;
        }
        else if(isOperand(post[i])){
         int num=0;
         while(isOperand(post[i])){
            num=num*10+post[i]-'0';
            i++;
         }
         push(num);
        }
        else{
            int op2=pop();
            int op1=pop();
            int result;
            switch(post[i++]){
                case '+':  result=op1+op2 ; break;
                case '-':  result=op1-op2; break;
                case '*':  result=op1*op2; break;
                case '/':  result=op1/op2; break;
                case '%':  result=op1%op2; break;
            }
            push(result);
        }
        
    }
printf("\n result is %d",pop());
    return 0;
}