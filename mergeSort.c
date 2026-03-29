#include<stdio.h>
void divide(int arr[],int beg,int end);
void merge(int arr[], int beg,int mid,int end);
int main(){
int n;
printf("\n Enter the size of array :");
scanf("%d",&n);
int arr[n];
printf("\n Enter array elements: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
divide(arr,0,n-1);
printf("\n Sorted array is: : \n");
for(int k=0;k<n;k++)
printf(" %d",arr[k]);
return 0;
}
void divide(int arr[],int beg,int end){
    if(beg<end){
    int mid=(beg+end)/2;
    divide(arr,beg,mid);
    divide(arr,mid+1,end);
    merge(arr,beg,mid,end);    
}
}
void merge(int arr[], int beg,int mid,int end){
    int i=beg,j=mid+1,index=beg;
    int temp[100],k;
    while(i<=mid&&j<=end){
    if(arr[i]<arr[j]){
        temp[index]=arr[i];
        i++;
    }
    else{
        temp[index]=arr[j];
        j++;
    }
    index++;
    }
    if(i>mid){
        while(j<=end){
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    else {
        while(i<=mid){
            temp[index]=arr[i];
            i++;
            index++;
        }
    }
    for(int k=beg;k<index;k++)
    arr[k]=temp[k];
}
