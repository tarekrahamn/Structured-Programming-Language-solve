#include <stdio.h>

int main()
{
    int rows, cols, n;

    /* Input rows and columns from user */
    printf("Enter number of N: ");
    scanf("%d", &n);

    for(rows=1; rows<=n; rows++)
    {
        for(cols=1; cols<=n; cols++)
        {
            // Print the current column number
            printf("%d", cols);
        }

        printf("\n");
    }

    return 0;
}
