#include <stdio.h>

int countOccurrence(char* str, char target) {
    int count = 0;
    while (*str) {
        if (*str == target)
            count++;
        str++;
    }
    return count;
}
int main() {
    char str[100];
    char target;
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character to find occurrence: ");
    scanf(" %c", &target);
    int occurrence = countOccurrence(str, target);

    printf("The character '%c' appears %d time(s) in the string.\n", target, occurrence);

    return 0;
}
