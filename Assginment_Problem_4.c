#include <stdio.h>
int factorial(int a){
    int i, fact = 1;
    for(i=1;i<=a;i++){
            fact=fact*i;
    }
    return fact;
}
int main(){
    int i;
    for(i = 1; i<=7; i++){
        printf("%d Factorial is: %d\n",i , factorial(i));
    }

    return 0;
}
