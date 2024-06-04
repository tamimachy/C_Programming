#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d",&n);
    float a,b,c, average;
    for(i=0;i<n;i++){
        scanf("%f %f %f",&a,&b,&c);
        average = (a*2 + b*3 + c*5)/(2+3+5);
        printf("%.1f\n",average);
    }
    return 0;
}
