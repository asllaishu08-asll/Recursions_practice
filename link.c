#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int a=1;a<=t;a++){
        int n,k;
        scanf("%d%d",&n,&k);
        int arr[n],taste[n];
        for(int i=0;i<n;i++){
           scanf("%d",&arr[i]);
        }
         for(int i=0;i<n;i++){
           scanf("%d",&taste[i]);
        }
        int more=0,b=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int small,big;
                if(arr[i]>arr[j]){
                    small=arr[j];
                    big=arr[i];
                }
                else{
                    small=arr[i];
                    big=arr[j];
                }
                int discount=big/2;
                if(discount>100)
                discount=100;
                big=big-discount;
                int sum=small+big;
                if(sum<=k){
                    int fine=taste[i]+taste[j];
                    if(fine>=more)
                    more=fine;
                    b=0;
                }
            }
        }
        if(b==0){
            printf("\n%d",more);
        }
        else{
            printf("\n0");
        }
    }
}