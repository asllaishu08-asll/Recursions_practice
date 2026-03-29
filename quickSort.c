#include<stdio.h>
int main(){
int n;
printf("\n Enter the size of array :");
scanf("%d",&n);
int arr[n];
printf("\n Enter array elements: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);

return 0;
}