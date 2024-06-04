#include<stdio.h>
int main()
{
    int x[100], i, max = 0, pos;
    for(i=0;i<100;i++){
        scanf("%d",&x[i]);
    }
    max = x[0];
    for(i=1;i<100;i++){
        if(max < x[i]){
            max = x[i];
            pos = i+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",pos);
    return 0;
}
