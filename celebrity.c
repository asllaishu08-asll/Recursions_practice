#include<stdio.h>
int main(){
    int m;
    printf("\n Enter the number of people: ");
    scanf("%d",&m);
    int arr[m][m];
    for(int i=0;i<m;i++){
        printf("\n Enter the inputs of %d person: ",i);
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }
    for(int i=0;i<m;i++){
        int rowSum=0,colomnSum=0;
        for(int j=0;j<m;j++){
          rowSum+=arr[i][j];
          colomnSum+=arr[j][i];
    }
    if(rowSum==1&&colomnSum==m){
        printf("\n Celebrity is %d",i);
    }
    }
}