#include <stdio.h>
int main()
{
        int n, i, num, factorial;
        printf("Enter the number of terms: ");
        scanf("%d", &n);

        for(i = 1; i <= n; i++)
        {
                num = i;
                factorial = 1;
                while(num)
                {
                        factorial = factorial * num;
                        num--;
                }
                printf("%d \t %d\n", i, factorial);
        }
        return 0;
}