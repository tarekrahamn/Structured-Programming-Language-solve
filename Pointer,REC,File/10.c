#include<stdio.h>
int sumOfRange(int n1) 
{
    int res;
    if (n1 == 1) 
    {
        return (1);
    } 
    else 
    {
        res = n1 + sumOfRange(n1-1);
    }
    return (res);
}
int main() 
{
    int n1;
    int sum;   
    printf(" Input the last number of the range starting from 1 : ");
    scanf("%d", &n1);
    sum = sumOfRange(n1); 
    printf("\n The sum of numbers from 1 to %d : %d\n\n", n1, sum);
    return (0);
}
