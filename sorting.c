#include<stdio.h>
int main(){
    int i, j, a;
    char data[100];
    for(i=0;i<3;i++){
        scanf("%d",&data[i]);
    }
    for(i=0; i<2; i++){
        for(j=i+1; j<3; j++){
            if(data[i]>data[j]){
                a = data[i];
                data[i] = data[j];
                data[j] = a;
            }
        }
    }
    printf("Ascending:\n");
    for(i=0;i<3;i++){
        printf("%d\n",data[i]);
    }
    printf("Descending:\n");
    for(i=2; i>=0; i--){
        printf("%d\n",data[i]);
    }
    return 0;
}
