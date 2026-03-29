#include<stdio.h>
int main(){
int n;
printf("\n Enter the size of array :");
scanf("%d",&n);
int arr[n];
printf("\n Enter array elements: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
for(int i=0;i<n-1;i++){
    int p=-1;
     printf("\n order of %d pass is \n ",i+1);
    for(int j=0;j<n-1;j++){
    if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        p=i;
    }
       }
       for(int k=0;k<n;k++)
       printf("\t %d",arr[k]);
       if(p==-1){
        printf("\n Array is already sorted  in %d pass ",i+1);
        break;
       }
       }
printf("\n Final order is : \n");
for(int l=0;l<n;l++)
printf(" %d",arr[l]);
// time complexity is O(n^3)
return 0;
}