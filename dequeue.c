#include<stdio.h>
#define max 5
int arr[max];
int f=-1,r=-1;
int isEmpty(){
    if(f==-1)
    return 1;
    return 0;
}
int isFull(){
    if((r+1)%max==f)
    return 1;
    return 0;
}
void insertfront(int val){
if(isFull()){
printf("\n Queue is full");
}
else if(isEmpty()){
    r=f=0;
}
else if(f==0){
    f=max-1;
}
else{
    f=f-1;
}
 arr[f]=val;
printf("\n Inserted value is %d",arr[f]);
}
void insertrear(int val){
if(isFull()){
printf("\n Queue is full");
}
else if(isEmpty()){
    r=f=0;
}
else if(r==max-1){
    r=0;
}
else{
    r=r+1;
}
arr[r]=val;
printf("\n Inserted value is %d",arr[r]);
}
void deletefront(){
    if(isEmpty()){
        printf("\n Queue is empty");
    }
    printf("\n deleted val is %d",arr[f]);
   if(f==r){
    f=r=-1;
   }
    else if(f==max-1)
    f=0;
    else{
        f=f+1;
    }
}
void deleteend(){
  if(isEmpty()){
        printf("\n Queue is empty");
    }
    printf("\n deleted val is %d",arr[r]);
    if(f==r)
    f=r=-1;
    else if(r==0){
        r=max-1;
    } 
    else{
        r=r-1;
    }
}
void display(){
   if(isEmpty()){
    printf("\n Dequeue is empty");
   }
   else{
    int i=f;
    while(1){
        printf("%d ",arr[i]);
        if(i==r)
        break;
        i=(i+1)%max;
    }
   }
}
int main(){
    insertfront(10);
    insertfront(20);
    insertfront(30);
    deletefront();
    deletefront();
    deletefront();
    deletefront();
    insertrear(40);
    insertrear(50);
    printf("\n");
    display();
}