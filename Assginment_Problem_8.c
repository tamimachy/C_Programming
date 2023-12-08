#include<stdio.h>
int main(){
    int n,i,sum=0,j=1;
    printf("The number of summation: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+j;
        j=(j*10)+1;
    }
    printf("Sum of the series: %d\n",sum);
    return 0;
}
