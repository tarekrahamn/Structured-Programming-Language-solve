#include<stdio.h>
int main()
{
    int A[3][3],i,j,sum1=0,sum2=0;
    printf("Enter the number of row and column for the Matrix:");
    for(i = 0;i < 3;i++)
    {                               // for Row 
        for ( j = 0; j < 3; j++)
        {                       // For colum
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        } 
    }
    printf("The Matrix is :\n");
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("% d",A[i][j]);       
        }
        printf("\n");
    }
    printf(" first Diagonal Element is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum1 = sum1 + A[i][j];
            }
        }
    }
    printf("\n Second Diagonal Element is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            {
                printf("%d ",A[i][j]);
                sum2 = sum2 + A[i][j];
            }
        }
    }
    printf("\nSum of First Diagonal elements = %d",sum1 );
    printf("\nSum of Second Diagonal elements = %d",sum2 );
    printf("\nSubtract SUM1 and SUM2 = %d",sum1-sum2 ); 
    return 0;
}