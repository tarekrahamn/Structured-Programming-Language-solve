#include<stdio.h>
int main()
{
    int i,j,a[100][100],n,sum=0;
    printf("enter 2D array size'n': \n");
    scanf("%d", &n);

    if(n%2==0)
        printf("N must be odd to continue!");

    else
    {
        printf("enter 2D array : \n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                sum+=a[i][j];
            }
        }

         for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j==n-1)
                sum+=a[i][j];
            }

        }


            for(i=0,j=0;j<n;j++)
            {
                sum+=a[i][j];
            }
            for(i=n-1,j=0;j<n;j++)
            {
                sum+=a[i][j];
            }
            sum=sum-(a[0][0]+a[0][n-1]+a[n-1][0]+a[n-1][n-1]+a[n/2][n/2]);
            printf("%d", sum);
    }
}


