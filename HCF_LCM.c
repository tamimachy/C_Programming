#include<stdio.h>
int main(){
    int a, b, min, i, hcf, lcm;
    printf("Enter Two Value:");
    scanf("%d %d",&a,&b);
    min = (a>b)?a:b;
    for(i = min; i>=1; i--){
        if(a%i == 0 && b%i == 0){
            hcf = i;
            break;
        }
    }
    printf("HCF is : %d\n",hcf);
    for(i = min; i<=a*b; i++){
        if(i%a == 0 && i%b == 0){
            lcm = i;
            break;
        }
    }
    // lcm = (a*b)/ hcf;
    printf("LCM is : %d",lcm);
    return 0;
}
