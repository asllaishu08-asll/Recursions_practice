#include<stdio.h>
#include<string.h>
#define max 10
int f=-1,r=-1;
int queue[max];
int insert(int val){
if(r==max-1)
printf("\n Overflow");
else if(f==-1&&r==-1){
   f= r=0;
    queue[r]=val;
}
else{
    queue[++r]=val;
}
return queue[r];
}
int delete(){
    if(f==-1||f>r){
    printf("\n queue is empty");
    return -1;
    }
    else{
       int val=queue[f];
        f=f+1;
        return val;
    }
}
void display(){
    if(f==-1 || f>r){
        printf("\n Queue is empty");
        return;
    }
    
    for(int i=f; i<=r; i++){
        printf("%d ", queue[i]);
    }
}
int peek(){
    if(f==-1&&r==-1){
        printf("\n Queue is already empty");
        return -1;
    }
    else{
        return queue[f];
    }
}
int main(){
int a=insert(10);
int b=insert(20);
int c=insert(30);
int d=insert(40);
int e=delete();
int g =peek();
printf("\n Inserted element is %d" ,a);
printf("\n Inserted element is %d" ,b);
printf("\n Inserted element is %d" ,c);
printf("\n Inserted element is %d" ,d);
printf("\n deleted element is %d" ,e);
printf("\n 1st element is %d" ,g);
printf("\n");
 display();
return 0;
}