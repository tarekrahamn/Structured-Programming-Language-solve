//Series:1-2+3-4+5-6+7-8.....N
//Want sum  up to N terms?Enter the N term

#include<stdio.h>
int main (){
    int n,i,even=0,odd=0;
    printf("Enter the N term:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if (i % 2 == 0)
        {
            even = even + i;           // it gives us Even number
        }
        else
        {
              odd = odd + i;             // it gives us Odd number
        }
    }
    printf("The SUM is : %d",odd - even);
    return 0;
}