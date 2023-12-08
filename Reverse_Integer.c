#include<stdio.h>
int main(){
    int num, reminder, reverse = 0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    while(num!=0){
        reminder = num%10;
        reverse = reverse * 10 + reminder;
        num = num/10;
    }
    printf("Reverse of number: %d\n",reverse);
    return 0;
}
