#include<stdio.h>
int main(){
    int A[3][3],i,j,upperSum=0,lowerSum=0;
    printf("Enter the number of row and column for the Matrix:");
    for(i = 0;i < 3;i++){                               // for Row 
        for ( j = 0; j < 3; j++){                       // For colum
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        } 
    }
    //Printing the matrix
    printf("The Matrix is :\n");
    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            printf("% d",A[i][j]);       
        }
        printf("\n");
    }
    // The sum of the upper and lower triangel Matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i<j)
        upperSum = upperSum + A[i][j];
        if(i>j)
        lowerSum = lowerSum + A[i][j];
            }
        }
    printf("\n The Sum of upper triangle elements = %d",upperSum );
    printf("\n The Sum of lower triangle elements = %d",lowerSum );
}