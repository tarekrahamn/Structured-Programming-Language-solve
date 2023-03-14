#include <stdio.h>

int main()
{
    int i,n,  k;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(k=n;k>=i;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
    }
