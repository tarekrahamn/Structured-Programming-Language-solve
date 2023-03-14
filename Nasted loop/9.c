
#include <stdio.h>

int main()
{
    int  i, j, k,n;

    /* Input rows and columns from user */
    printf("Enter number of N: ");
    scanf("%d", &n);

    k = 1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(k == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        
    

            // If k = 1  then k *= -1 => -1
            // If k = -1 then k *= -1 =>  1
           k =k* -1;
        }

        if(n % 2 == 0)
        {
            k =k* -1;
        }

        printf("\n");
    }

    return 0;
}
