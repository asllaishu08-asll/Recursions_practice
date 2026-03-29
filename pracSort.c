#include<stdio.h>
int main(){
    printf("\n Enter size: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter array elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    //selectionSort(arr,n);
    //bubbleSort(arr,n);
    //insertionSort(arr,n);
    // mergeSort(arr,0,n-1);
    // QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
void selectionSort(int arr[],int n){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
if(arr[j]<arr[i]){
    int temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
}
    }
}
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}
void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
       int key=arr[i];
       int j=i-1;
       while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}
void mergeSort(int arr[], int l,int r){
    if(l<r){
int m=(l+r)/2;
mergeSort(arr,l,m);
mergeSort(arr,m+1,r);
merge(arr,l,m,r);
    }
}
void merge(int arr[],int l,int m,int r){
int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2];
int k=l;
for(int i=0;i<n1;i++)
L[i]=arr[l+i];
for(int j=0;j<n2;j++)
R[j]=arr[m+j+1];
int i=0,j=0;
while(i<n1&&j<n2){
if(L[i]<R[j]){
arr[k]=L[i];
i++;
}
else{
    arr[k]=R[j];
    j++;
}
k++;
}
while(i<n1){
    arr[k++]=L[i++];
}
while(j<n2){
    arr[k++]=R[j++];
}
}
void QuickSort(int arr[],int l,int h){
if(l<h){
int part=partition(arr,l,h);
QuickSort(arr,l,part-1);
QuickSort(arr,part+1,h);
}
}
int partition(int arr[],int l,int h){
int pivot=arr[h];
int i=l-1;
for(int j=l;j<h;j++){
    if(arr[j]<pivot){
        i++;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int temp=arr[i+1];
    arr[i+1]=arr[h];
    arr[h]=temp;
 return i+1;
}