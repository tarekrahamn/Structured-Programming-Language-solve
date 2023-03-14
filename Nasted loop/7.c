#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //outer loop
    {
        for(j=1;j<=n;j++) //inner loop
        {
            printf("*");
        }
        printf("\n");
    }

return 0;
}