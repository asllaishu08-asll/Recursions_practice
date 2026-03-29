#include<stdio.h>
#define max 5
int q1[max],q2[max];
int f=-1,r=-1;
void insert(int val){
    if(r==max-1)
    printf("\n Queue is full");
    else if(f==-1&&r==-1){
        f=r=0;
        q1[r]=val;
    }
    else{
        q1[++r]=val;
    }
}
int delete(){
    if(f==-1||f>r){
        printf("\n Queue is empty");
        return -1;
    }
 else{
    int val=q1[f];
    f=f+1;
    return val;
 }
}
 int count=0;
void display(){
    count=0;
    for(int i=r;i>=f;i--)
    {
    count++;
  printf("%d ",q1[i]);
    }
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    for(int i=0;i<count;i++){
        int val;
        val=delete();
       insert(val);
    }
    display();
return 0;
}