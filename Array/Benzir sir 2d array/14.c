#include<stdio.h>
int main()
{
    int mat[100][100],m,n,k[100],l=0,q=0,i,j;
    printf("Enter the row & column of matrix: \n");
    scanf("%d %d", &m,&n);
    printf("Enter Matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &mat[i][j]);
            k[l]=mat[i][j];
            l++;
        }
    }
    for(i=0;i<(m*n);i++)
    {
        for(j=i+1;j<(m*n);j++)
        {
            if(k[i]==k[j])
                k[j]=-1;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            mat[i][j]=k[q];
            q++;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

