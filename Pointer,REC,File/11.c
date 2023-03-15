#include<stdio.h>
int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return;
    }
    else
    {
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}
int main()
{
int n, m= 0, i;
printf("Enter Total terms:");
scanf("%d", &n);
printf("Fibonacci series terms are: ");
for(i = 1; i <= n; i++)
{
    printf("%d, ", fibonacci(m));
    m++;
}
return 0;
}
