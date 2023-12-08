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
    int i, n = 2;
    for(i=1; i<=10; i++){
        printf("%d %d \n",i,square(i,n));
    }
    return 0;
}
