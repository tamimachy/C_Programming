#include<stdio.h>
#include <math.h>
int main(){
    /*
    double N; int n, aux;
    scanf("%lf",&N);
    n = N;
    N = N*100;
    aux = N;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n/100);
    n = n%100; // 76
    printf("%d nota(s) de R$ 50.00\n",n/50);
    n = n%50; //26
    printf("%d nota(s) de R$ 20.00\n",n/20);
    n = n%20; // 6
    printf("%d nota(s) de R$ 10.00\n",n/10);
    n = n%10; // 6
    printf("%d nota(s) de R$ 5.00\n",n/5);
    n = n%5; // 1
    printf("%d nota(s) de R$ 2.00\n",n/2);
    printf("MOEDAS:\n");
    n = n%2; //1
    printf("%d moeda(s) de R$ 1.00\n",n/1);
    aux = aux%100; //.73
    printf("%d moeda(s) de R$ 0.50\n",aux/50);
    aux = aux%50; // .23
    printf("%d moeda(s) de R$ 0.25\n",aux/25);
    aux = aux%25; // 23
    printf("%d moeda(s) de R$ 0.10\n",aux/10);
    aux = aux%10; // 3
    printf("%d moeda(s) de R$ 0.05\n",aux/5);
    aux = aux%5; //3
    printf("%d moeda(s) de R$ 0.01\n",aux/1);

    int a,b,c,d,s1,s2;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    s1 = c+d;
    s2 = a+b;
    if(b>c && d>a && s1>s2 && c>0 && d>0 && a%2 == 0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }


    double a, b, c, r1,r2,r;
    scanf("%lf %lf %lf",&a,&b,&c);
    double d = pow(b,2) - (4*a*c);
    if(d < 0 || a==0){
        printf("Impossivel calcular\n");
    }
    else{
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }

    float n;
    scanf("%f",&n);
    if(n<0 || n>100){
        printf("Fora de intervalo\n");
    }
    else if(n>0 && n<=25){
        printf("Intervalo [0,25]\n");
    }
    else if(n>25 && n<=50){
        printf("Intervalo (25,50]\n");
    }
    else if(n>50 && n<=75){
        printf("Intervalo (50,75]\n");
    }
    else if(n>75 && n<=100){
        printf("Intervalo (75,100]\n");
    }


    float n1, n2, n3, n4, avg, n5;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    avg = (n1 * 2.0 + n2 * 3.0 + n3 * 4.0 + n4 * 1.0) / (2.0 + 3.0 + 4.0 + 1.0);
    printf("Media: %.1f\n",avg);
    if(avg >= 7.0){
        printf("Aluno aprovado.\n");
    }
    if(avg < 5.0){
        printf("Aluno reprovado.\n");
    }
    if(avg >= 5.0 && avg <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&n5);
        printf("Nota do exame: %.1f\n",n5);
        float avg2 = (avg + n5) / 2.0;
        if(avg2 >=5.0){
            printf("Aluno aprovado.\n");
        }
        else if(avg2 <= 4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg2);
    }

    float x,y;
    scanf("%f %f",&x,&y);
    if (x==0 && y==0){
        printf("Origem\n");
    }
    else if(x==0 && y>0){
        printf("Eixo X\n");
    }
    else if(x>0 && y==0){
        printf("Eixo Y\n");
    }
    else if(x>0 && y>0){
        printf("Q1\n");
    }
    else if(x<0 && y>0){
        printf("Q2\n");
    }
    else if(x<0 && y<0){
        printf("Q3\n");
    }
    else if(x>0 && y<0){
        printf("Q4\n");
    }
    */

    int i, j, temp;
    char a[100];
    for(i = 0; i<3; i++){
        scanf("%d",&a[i]);
    }
    //accending
    for(i=0; i<3; )

    return 0;
}


