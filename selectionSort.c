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
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            p=i;
        }
    }
    if(p==-1){
        printf("\n array is sorted in %d pass",i+1);
        break;
    }
    else{
        printf("\n array in %d pass is: \n",i+1);
        for(int k=0;k<n;k++)
        printf(" %d",arr[k]);
    }
}
printf("\n Sorted array is: \n");
for(int k=0;k<n;k++)
printf("\t %d",arr[k]);
return 0;
}