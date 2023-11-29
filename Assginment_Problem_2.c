#include<stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number>=1 && number<=10){
        if(number%2 == 0){
            printf("%d is Even\n",number);
        }
        else{
            printf("%d is Odd\n",number);
        }
    }
    else{
        printf("Number Limitation is 1 to 10.\n");
    }
    return 0;
}
