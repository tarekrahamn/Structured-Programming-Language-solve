#include<stdio.h>
int main()
{
    int i,j,a[100][100],m,n,sum=0;
    printf("enter 2D array size: \n");
    scanf("%d", &m);
    scanf("%d", &n);
    printf("enter 2D array : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
            sum+=a[i][j];
        }
    }
        printf("%d", sum);
        return 0;
}

