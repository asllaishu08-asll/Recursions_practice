#include<stdio.h>
#define max 5
int f=-1,r=-1;
int queue[max];
void insert(int val){
    if(f==-1&&r==-1){
        f=r=0;
        queue[r]=val;
        printf("\n Inserted val is %d",queue[r]);
    }
    else if (f==0 &&r==max-1){
    printf("\n Queue is full");
    }
    else if(f==0&&r!=max-1){
        queue[++r]=val;
        printf("\n Inserted val is %d",queue[r]);
    }
    else if(f!=0&&r==max-1){
        r=0;
        queue[r]=val;
        printf("\n Inserted val is %d",queue[r]);
    }
}
void delete(){
    if(f==-1&&r==-1){
        printf("\n Queue is empty");
    }
    else if(f==r){
    printf("\n Deleted value is %d",queue[f]);
    f=r=-1;
    }
    else {
        if(f==max-1){
            printf("\n Deleted element is %d",queue[f]);
        f=0;
        }
        else{
            printf("\n Deleted element is %d",queue[f]);
        f=f+1;
        }
    }
}
void peek(){
    if(f==-1)
    printf("\n queue is empty");
    else{
        printf("\n First value is %d",queue[f]);
    }
}
void display(){
    if(f==-1)
    printf("\n queue is empty");
    else{
        for(int i=f;i<=r;i++)
        printf("%d ",queue[i]);
    }
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    delete();
    delete();
    delete();
     peek();
    delete();
    delete();
    delete();
    peek();
    display();
    return 0;
}