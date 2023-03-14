//Matrix multiplaction
//First matrix colum and second matrix row equal for multi...
#include<stdio.h>
int main () {
    int first[10][10],second[10][10],result[10][10],col1,col2,row1,row2,i,j,k,sum=0;
    printf("Enter THe Rows and Column for First  Matrix:");
    scanf("%d %d",&row1,&col1);

    printf("Enter THe Rows and Column for Second  Matrix:");
    scanf("%d %d",&row2,&col2);
    
    while(col1!=row2)
    {
        printf("Error !! column of first matrix not equal to row of second\n ");
        printf("Enter THe Rows and Column for First  Matrix:");
        scanf("%d %d",&row1,&col1);

        printf("Enter THe Rows and Column for Second  Matrix:");
        scanf("%d %d",&row2,&col2);
    }

    //taking input for  first matrix
    printf("\nFirst Matrix Input is :\n");
    for ( i = 0; i < row1; i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("first[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
    }

    // taking input for second matrix
    printf("\nSecond Matrix Input is :\n");
    for ( i = 0; i < row2; i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("second[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    //multiplying matrix
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            for(k=0;k<col1;k++)
            {
                sum=sum +first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

        // printing first matrix
        printf("\n\nFirst matrix:\n");

            for ( i = 0; i < row1; i++)
            {
                printf("\t");
                for(j=0;j<col1;j++)
                    printf("% d ",first[i][j]);
                    printf("\n");    
            }
     //printing second matrix
        printf("\n\nSecond matrix:\n");
            for ( i = 0; i < row2; i++)
            {
                printf("\t");
                for(j=0;j<col2;j++)
                    printf("% d",second[i][j]);
                    printf("\n"); 
            }
             //printing result matrix
        printf("\n\nResult matrix:\n");

            for ( i = 0; i < row1; i++)
            {
                printf("\t");
                for(j=0;j<col2;j++)
                    printf("% d ",result[i][j]);
                    printf("\n");          
            }
    return 0;
}