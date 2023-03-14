#include<stdio.h>
int main (){
    int i,j,numberofRows,numberofCols;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter the number of ROW and COLS:");
    scanf("%d %d",&numberofRows,&numberofCols);

                                          //scan a matrix
    printf("Enter the elements for A matrix:\n");
    for(i=0;i<numberofRows;i++)
    {
        for(j=0;j<numberofCols;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
                                      //scanning B matrix
        printf("\n\nEnter the elements for B matrix:\n");
        for(i=0;i<numberofRows;i++)
        {
            for(j=0;j<numberofCols;j++)
            {
                printf("B[%d][%d]=",i,j);
                scanf("%d",&B[i][j]);
            }
            printf("\n");
        }
                                               // Print Matrix A
        printf("A =");
        for(i=0;i<numberofRows;i++)
        {
            printf("\t");
            for(j=0;j<numberofCols;j++)
            {
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
                                             // print matrix B
        printf("\nB = ");
        for(i=0;i<numberofRows;i++)
        {
            printf("\t");
            for(j=0;j<numberofCols;j++)
            {
                printf("%d ",B[i][j]);
            }
            printf("\n");
        }
                                                       // Adding The rows
        for(i=0;i<numberofRows;i++)
        {
            for(j=0;j<numberofCols;j++)
            {
                C[i][j] = A[i][j] + B[i][j];            // For Subtract A - B
            }
        }
                                              //Printing Matrix c
       printf("A + B = ");                    // printf A-B for subtract
        for(i=0;i<numberofRows;i++)
        {
            for(j=0;j<numberofCols;j++)
            {
                printf("%d ",C[i][j]);
            }
            printf("\n");
            printf("\t");
        }
        return 0;
}