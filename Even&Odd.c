#include<stdio.h>
int main(){
    int n,i,sum1 = 0, sum2 = 0;
    char number[100];
    printf("Enter a size of Array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
        if(number[i]%2 == 0){
            sum1=sum1+number[i];
        }
        else if(number[i]%2 != 0){
            sum2= sum2+number[i];
        }
    }
    int sum = (sum1>sum2)?sum1:sum2;
    printf("Larger sum is: %d\n",sum);
    return 0;
}
