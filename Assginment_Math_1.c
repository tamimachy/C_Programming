#include<stdio.h>
int main(){

    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("Character is lower case: %c\n",ch);
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("Character is upper case: %c\n",ch);
    }
    else if(ch >= '0' && ch <= '9'){
        printf("Character is a digit: %c\n",ch);
    }
    else if(ch == ' ' || ch == '\t' || ch == '\n'){
        printf("Character is a white space: %c\n",ch);
    }
    return 0;
}
