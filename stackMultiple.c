#include<stdio.h>
#define max 10
    int stack[max],topA=-1,topB=max;
int pushA(int val){
if(topA==topB-1)
printf("\n Stack overflow");
else{
    topA=topA+1;
    stack[topA]=val;
    printf("\n Pushed element int stack A is %d",val);
}
return topA;
}
int pushB(int val){
if(topA==topB-1)
printf("\n Stack overflow");
else{
    topB=topB-1;
    stack[topB]=val;
    printf("\n Pushed element int stack B is %d",val);
}
return topB;
}
int popA(){
    int val;
    if(topA==-1)
printf("\n stack is empty");
else{
    topA=topA-1;
 val=stack[topA];
 return val;
}
}
int popB(){
    int val;
    if(topA==max)
printf("\n stack is empty");
else{
    topB=topB+1;
 val=stack[topB];
 return val;
}
}
int main(){
    int n;
    printf("\n 1. push element into stack A");
    printf("\n 2. push element into stack B");
    printf("\n 3. pop element from stack A");
    printf("\n 4. peek element from stack A");
    printf("\n 5. peek element from stack B");
    printf("\n\n Enter your  choice: ");
    scanf("%d",&n);
if(n==1)
pushA(10);
if(n==2)
pushB(20);
if(n==3)
popA();
if(n==4)
popB();
return 0;
}