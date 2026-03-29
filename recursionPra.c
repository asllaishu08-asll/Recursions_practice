#include<stdio.h>
void rev(int n){
    if(n==0||(n%10)==0)
    return ;
    else{
        printf("%d",n%10);
        rev(n/10);
    }
}
int main(){
    int n;
    printf("\n Enter n: ");
    scanf("%d",&n);
    rev(n);
    return 0;
}