#include<stdio.h>
int main()
{
    int i,j,k,l,a[100][100],b[100][100],n,flag=0;
    printf("enter 2D array size: \n");
    scanf("%d", &n);
    printf("enter 2D array : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);

        }
    }
    for(j=0,k=0;j<n,k<n;j++,k++)
    {
        for(i=0,l=0;i<n,l<n;i++,l++)
        {
            b[k][l]=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!= b[i][j])
            {
                flag=1;
                break ;
            }
        }
    }

    if(flag==0)
        printf("Yes");
    else
        printf("No");
        return 0;

}

