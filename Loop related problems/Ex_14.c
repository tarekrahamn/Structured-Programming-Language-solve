#include<stdio.h>
int factorial(int);
int main()
{
    int n,r;
    float nCr,nPr;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter the value of r:\n");
    scanf("%d",&r);
    if(n>=r&&n>=0&&r>=0)
    {
        nPr=(float)factorial(n)/factorial(n-r);
        nCr=(float)factorial(n)/(factorial(r)*factorial(n-r));
        printf("Value of %dP%d=%f\n",n,r,nPr);
        printf("Value of %dC%d=%f\n",n,r,nCr);
    }
    else
    {
        printf("Invalid entry\n");
    }
    return 0;
}

int factorial(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
} 