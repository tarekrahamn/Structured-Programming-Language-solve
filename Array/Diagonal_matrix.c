#include<stdio.h>
int main(){
    int A[3][3],i,j,sum=0;
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
    // The sum of the Diagonal Matrix
    printf("Diagonal Element is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
        printf("%d ",A[i][j]);
        sum = sum + A[i][j];
            }
        }
    }
    printf("\nSum of Diagonal elements = %d",sum );
    return 0;
}