#include<stdio.h>
int main(){
    int n1 , n2 , a , b , r , gcd , lcm;     // n1 and n2 for LCM

    printf("Enter The Number Of A:");
    scanf("%d",&n1);
    printf("Enter The Number Of B:");
    scanf("%d",&n2);

    a = n1;          // a and b for GCD
    b = n2;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    gcd = a;
    lcm = (n1 * n2) / gcd;
    printf("The GCD is :%d\n",gcd);
    printf("The LCM is :%d\n",lcm);

    return 0;
}