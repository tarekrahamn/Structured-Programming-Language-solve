/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int rows, cols, n;

    /* Input rows and columns from user
     */
    printf("Enter number of : ");
    scanf("%d", &n);

    for(rows =1; rows<=n; rows++)
    {
        for(cols=rows; cols < rows+n; cols++)
        {
            printf("%d", cols);
        }

        printf("\n");
    }

    return 0;
}