#include<stdio.h>
void print1ToN(int N)
{
    if(N==0)
    {
        return;
    }
    else
    {
        print1ToN(N-1);
    }
    printf("%d,", N);
}
int main()
{
    int N;
    printf("\nEnter The range of Numbers : ");
    scanf("%d",&N);
    print1ToN(N);
    return 0;
}
