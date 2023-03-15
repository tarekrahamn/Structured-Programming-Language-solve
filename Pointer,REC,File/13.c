#include<stdio.h>
int count_digit(int num)
{
    static int count=0;
    if(num!=0)
    {
        count++;
        count_digit(num/10);
    }
    return count;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The number of digits in the Given Number is %d",count_digit(n));
}