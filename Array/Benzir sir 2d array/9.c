#include<stdio.h>
void main()
{
    int n,sum=0,maj=0,min=0,first=0,last=0;
    printf("Square Matrix Size: ");
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    if(n%2==1)
    {
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
                if(i==j)
                {
                    maj+=a[i][j];
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j==n-1)
                {
                    if(i&&j==n/2)
                    {
                        break;
                    }
                    min+=a[i][j];
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(i<1)
            {
                for(j=1;j<n-1;j++)
                {
                first+=a[i][j];
                }
            }
            if(i==n-1)
            {
                for(j=1;j<n-1;j++)
                {
                    last+=a[i][j];
                }
            }
        }
        sum=maj+min+first+last;
        printf("Sum: %d",sum);
    }
    else
    {
        printf("\n\n*-*-*\\Matrix size must be odd number/*-*-*\n\n\n\n");
    }
}

