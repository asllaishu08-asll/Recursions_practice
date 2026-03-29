#include<stdio.h>
int main(){
    int n;
    printf("\n Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter sorted array elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int beg=0,end=n-1,mid;
    int val,temp=-1;
    printf("\n Enetr the value you want to search: ");
    scanf("%d",&val);
    for(int i=0;beg<=end;i++){
        mid=(end+beg)/2;
    if(val==arr[mid]){
    temp=mid;
    break;
    }
    else if(val>arr[mid]){
        beg=mid+1;
    }
    else
    end=mid-1;
    }
    if(temp>=0)
    printf("\n Number found at index %d",temp);
    else 
    printf("\n Number not found");
    return 0;
}