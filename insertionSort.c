#include<stdio.h>
int main(){
int n;
printf("\n Enter the size of array :");
scanf("%d",&n);
int arr[n];
printf("\n Enter array elements: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
int i, j, temp;
for(i=1;i<n;i++)
{
temp = arr[i];
j = i-1;
while((temp < arr[j]) && (j>=0))
{
arr[j+1] = arr[j];
j--;
}
arr[j+1] = temp;
}
printf("\n Sorted array is :\n ");
for(int k=0;k<n;k++)
printf(" %d",arr[k]);
return 0;
}