#include<stdio.h>
int square(int a, int b){
    int power = 1;
    int i;
    for(i = 1; i<=b; i++){
        power = power * a;
    }
    return power;
}

int main(){
    int x, n, result;
    scanf("%d %d",&x,&n);
    result = square(x,n);
    printf("%d power of %d is: %d\n",x,n,result);
    return 0;
}
