#include<stdio.h>
int main(){

    int start1, start2, end1, end2, time, minutes;
    scanf("%d %d %d %d",&start1,&start2,&end1,&end2);
    time = (24 - start1) + end1;
    minutes = (60 - start2) + end2;
    if(time<=24 && minutes<=60){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",time,minutes);
    }
    else if(time>24 && minutes>60){
        time = time - 24;
        minutes = minutes - 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",time,minutes);
    }
    return 0;
}
