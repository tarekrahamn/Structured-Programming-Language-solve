#include<stdio.h>
void main()
{
    int i,j,m,n,max=0,l;
    printf("Row:");
    scanf("%d",&m);
    printf("Col:");
    scanf("%d",&n);
    int ar[m][n];
    int res[m][n];
    printf("Input the number: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
            if(ar[j][i]>max)
            {
                max=ar[j][j];
                res[j][i]=max;

            }
        }
    }
    printf("Max: %d\n",res[j][i]);

}
