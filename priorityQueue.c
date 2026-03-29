#include<stdio.h>
#define max 5
int value[max],priority[max];
int count=0;
void insertion(int val,int pri){
    if(count==max){
        printf("\n Queue is full");
    }
    else{
       int  i=count-1;
        while(i>=0&&pri<priority[i]){
        priority[i+1]=priority[i];
        value[i+1]=value[i];
        i--;
        }
        value[i+1]=val;
        priority[i+1]=pri;
        count++;
    }
    printf("\n Inserted element is %d , %d",val,pri);
}
void delete(){
    if(count==0){
        printf("\n Queue is empty");
    }
    else{
        printf("\n deleted element is %d, %d",value[0],priority[0]);
        for(int i=1;i<max+1-i;i++){
            value[i-1]=value[i];
            priority[i-1]=priority[i];
        }
        count--;
    }
}
void display(){
    for(int i=0;i<count;i++)
    printf("%d , %d \n",value[i],priority[i]);
}
int main(){
    insertion(10,2);
    insertion(20,1);
    insertion(30,2);
    insertion(40,3);
    delete();
    printf("\n");
    display();
    return 0;
}