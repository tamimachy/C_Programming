#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N, x;
    float num = 9.00;
    float f = sqrt(num);
    printf("%lf",f);
    float A = M_PI*f*f;
    printf("Area is: %lf",A);
    char a[50];
    scanf("%s",a);
    printf("String: %s",a);
    scanf("%d",&N);
    printf("%d \n", N);
    printf("%d nota(s) de R$ 100,00\n",N/100);
    x = N%100; // 76
    printf("%d nota(s) de R$ 50,00\n",x/50);
    x = x%50;  // 26
    printf("%d nota(s) de R$ 20,00\n",x/20);
    x = x%20; // 6
    printf("%d nota(s) de R$ 10,00\n",x/10);
    x = x%10; // 6
    printf("%d nota(s) de R$ 5,00\n",x/5);
    x = x%5; // 1
    printf("%d nota(s) de R$ 2,00\n",x/2);
    x = x%2; // 1
    printf("%d nota(s) de R$ 1,00",x/1);
    return 0;
}
