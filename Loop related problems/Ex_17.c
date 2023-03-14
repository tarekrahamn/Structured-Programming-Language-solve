#include <stdio.h>
int main()
{
    int i=2,num,p=1;
    printf("Enter any number to check prime: ");
    scanf("%d", &num);

    while(i<num/2)
    {
        if(num%i==0)                                 /* Check divisibility of num */
        {
            p = 0;                                  /* Set isPrime to 0 indicating it as composite number */                    
            break;                               /* Terminate from loop */
        }
        i++;
    }                                              //   If isPrime contains 1 then it is prime
    if(p == 1 )
    {
        printf(" is prime number\n");
    }
    else
    {
        printf(" is not prime  number");
    }

    return 0;
}