#include<stdio.h>
void main()
{
    int i,j,m,n;
scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
