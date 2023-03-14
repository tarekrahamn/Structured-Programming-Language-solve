#include<stdio.h>
int main(){
    int A[10][10],transpose[10][10],i,j,row,col;
    printf("Enter the number of row and column for the Matrix:");
    scanf("%d %d",&row,&col);

    //Getting the elements for the matrix

    for(i = 0;i < row;i++){                               // for Row 
        for ( j = 0; j < col; j++){                       // For colum
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        } 
    }
    //Transpose

    for(i = 0;i < row;i++){
        for(j = 0;j < col;j++){
            transpose[j][i] = A[i][j];               // This is transpose vale
        }
    }
    //Printing the matrix
    printf("The Matrix is :\n");
    for(i = 0;i < row;i++){
        for(j = 0;j < col;j++){
            printf("% d",A[i][j]);                   // After scanning matrix value
        }
        printf("\n");
    }
    //Printing Transpose matrix

    printf("\n The Transpose Matrix is :\n");
    for(i = 0;i < col;i++){
        for(j = 0;j < row;j++){
            printf("% d",transpose[i][j]);                 // THe Final transpose value 
        }
        printf("\n");
    }
    return 0;
}
