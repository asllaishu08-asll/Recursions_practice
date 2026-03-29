#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("\n Enter array size: ");
    scanf("%d",&n);
    int k,arr[n];
    printf("\n Enter array elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int j;
    for(int i=0;i<n;i++){
        for( j=0;j<n;j++){
            if(j==n-1)
    break;
        printf("[%d] ",arr[j]);
    }

}
    return 0;
}