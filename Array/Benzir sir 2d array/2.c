#include<stdio.h>
void main()
{
    int row,col;
    printf("Enter The row:");
    scanf("%d",&row);
    printf("Enter The col:");
    scanf("%d",&col);
    int ar[row][col];
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("Row-wise: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",ar[i][j]);
        }
    }
    printf("\nColumn-wise: ");
    for(j=0;j<col;j++)
    {
        for(i=0;i<row;i++)
        {
            printf("%d ",ar[i][j]);
        }
    }
}
