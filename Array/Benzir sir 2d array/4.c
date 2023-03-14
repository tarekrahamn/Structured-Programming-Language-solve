#include<stdio.h>
int main()
{
    int A[5][5],i,j;
    printf("Enter the number of row and column for the Matrix:");
    for(i = 0;i < 5;i++)
    {                               // for Row 
        for ( j = 0; j < 5; j++)
        {                       // For colum
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        } 
    }
    printf("The Matrix is :\n");
    for(i = 0;i < 5;i++)
    {
        for(j = 0;j < 5;j++)
        {
            printf("% d",A[i][j]);       
        }
        printf("\n");
    }
    printf(" Major diagonal: :\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
            }
        }
    }
    printf("\n Minor diagonal: \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i+j==4)           //for n number i+j=n-1
            {
                printf("%d ",A[i][j]);
            }
        }
    }
    return 0;
}