#include<stdio.h>
int main(){
    int i, j, a, x, y, z;
    char data[3];

    for(i=0;i<3;i++){
        scanf("%d",&data[i]);
    }
    x = data[0];
    y = data[1];
    z = data[2];
    for(i=0; i<2; i++){
        for(j=i+1; j<3; j++){
            if(data[i]>data[j]){
                a = data[i];
                data[i] = data[j];
                data[j] = a;
            }
        }
    }
    // printf("Ascending:\n");
    for(i=0;i<3;i++){
        printf("%d\n",data[i]);
    }
    printf("\n%d\n%d\n%d\n",x,y,z);

    return 0;
}
