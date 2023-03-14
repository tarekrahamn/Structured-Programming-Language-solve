#include<stdio.h>
int main (){
    int n,row,col,k;
    printf("Enter the of N:");
    scanf("%d",&n);
    for(row=n;row>=1;row--){
        for(col=1;col<row;col++){
            printf(" ");
        }
        for(k=n;k>=row;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}