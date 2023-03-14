#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("You entered a negative number.");
    else
        printf("You entered a positive number.");
    return 0;
}