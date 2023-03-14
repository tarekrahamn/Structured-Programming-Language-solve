#include <stdio.h>

int main()
{
    int i, j,n, k;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<5;j++) {
            printf(" ");
        }
        for(k=1;k<(i*2);k++) {
                printf("*");
        }
        printf("\n");
    }
    return 0;
}