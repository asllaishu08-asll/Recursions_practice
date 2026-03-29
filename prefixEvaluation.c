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
    char prefix[max];
    printf("\n Enter any prefix expression : ");
    scanf("%[^\n]",prefix);
   for(int i=strlen(prefix)-1;i>=0;i--){
    if(prefix[i]==' ')
    continue;
    else if(isOperand(prefix[i])){
        int num=0, place=1;
        while(isOperand(prefix[i])){
            num=num+(prefix[i]-'0')*place;
            place=place*10;
            i--;
        }
        push(num);
    }
    else{
        int op1=pop();
        int op2=pop();
        int result;switch(prefix[i]){
                case '+':  result=op1+op2 ; break;
                case '-':  result=op1-op2; break;
                case '*':  result=op1*op2; break;
                case '/':  result=op1/op2; break;
                case '%':  result=op1%op2; break;
            }
            push(result);
    }
   }
   printf("\n Final result is : %d",pop());
       return 0;
}