#include<stdio.h>
int main(){
    int n, angle; // 2No
    scanf("%d",&n);
    n = n%360;
    angle = n%60;
    if(n>=0 && n<=60){
        printf("1st Quadrant\n");
    }
    else if(n>=61 && n<=120){
        printf("2nd Quadrant\n");
    }
    else if(n>=121 && n<=180){
        printf("3rd Quadrant\n");
    }
    else if(n>=181 && n<=240){
        printf("4th Quadrant\n");
    }
    else if(n>=241 && n<=300){
        printf("5th Quadrant\n");
    }
    else if(n>=301 && n<=360){
        printf("6th Quadrant\n");
    }
    printf("Anti-clockwise Distance: %d\n",angle);
    return 0;
}




/* int num, i;  // 1No_a
    scanf("%d",&num);
    if(num == 502){
        printf("I am Tamima.\nLast 3 digits of My Roll is 502");
    }
    else{
        printf("You entered wrong ID\n");
    }
     return 0;

}*/
