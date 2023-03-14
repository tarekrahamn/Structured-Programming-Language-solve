#include<stdio.h>
void main()
{
    int i,j,n,sum=0;
    printf("Matrix Size(n x n): ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2==1 && j%2==1)
            {
                break;
            }
            sum+=a[i][j];
        }
    }
    printf("%d",sum);
}

