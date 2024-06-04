#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            int i2 = i * i;
            printf("%d^2 = %d\n",i,i2);
        }
    }
    return 0;
}
