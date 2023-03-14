#include<stdio.h>
int main(){ 
    int i, j, n, r;
    printf("Enter a value: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)  {
        for(j=1; j<=i; j++)   {
            r = j%2;
        }
        printf("%d, ", r);
    }
    return 0;
}

