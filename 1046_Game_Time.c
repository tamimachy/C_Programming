#include<stdio.h>
int main(){

    int start, end, time;
    scanf("%d %d",&start,&end);
    time = 24;
    int total = (time - start) + end;
    if(total<=time){
        printf("O JOGO DUROU %d HORA(S)\n",total);
    }
    else{
        total = total - time;
        printf("O JOGO DUROU %d HORA(S)\n",total);
    }
    return 0;
}
