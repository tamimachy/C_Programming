#include<stdio.h>
int main(){
    int i, number =1;
    for(i = 1; i<=10; i++){
        if(number%2 == 0){
            printf("%d is Even\n",number);
        }
        else{
            printf("%d is Odd\n",number);
        }
        number = number + 1;
    }
    return 0;
}
