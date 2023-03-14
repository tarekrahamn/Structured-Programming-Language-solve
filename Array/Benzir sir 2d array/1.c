#include<stdio.h>
void main()
{
    int ar[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d"  ,ar[i][j]);
        }
        printf("\n");
    }
}
