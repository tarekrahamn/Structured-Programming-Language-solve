#include <stdio.h>

int main()
{
    int a, b, c, i, terms;

    /* Input number from user */
    printf("Enter number of terms: ");
    scanf("%d",&terms);

    /* Fibonacci magic initialization */
    a = 1;
    b = 0;
    c = 1;
    
    printf("Fibonacci terms: \n");

    /* Iterate through n terms */
    for(i=1; i<=terms; i++)
    {
        c = a+b; // New term
        a = b;     // Copy n-1 to n-2
        b = c;     // Copy current to n-1
        printf("%d, ", c);
    }

    return 0;
}