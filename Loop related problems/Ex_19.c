#include<stdio.h>
int main(){
    float  red,  pi=3.141592654, sinx=0, redfinal=1, sinxprev=0;

    int x, fact=1, i=1, fc, n=1, p=1,  powmin=1;
    printf("Enter The Number of Sinx :");
    scanf("%d", &x);
    red=pi*x/180;

    while(i>0)
    {
        sinxprev=sinx;
        fc=i;
        while(fc>=1)
        {
            fact=fact*fc;
            fc--;
        }
        //printf("Fact%d: %d\n", fc, fact);

        while(p<=i)
        {
            redfinal = redfinal*red;
            p++;
        }
        //printf("redfinal%d: %f\n", p, redfinal);

        sinx = sinx + (powmin)*redfinal/fact;
        //printf("sinx%d: %f\n", i, sinx);

        powmin=powmin*(-1);
        //printf("powmin%d: %d\n", i, powmin);

        redfinal=1;
        fact=1;
        i=i+2;
        p=1;
        if(sinxprev==sinx)
        {
            break;
        }
    }
    printf(" Enter The Final Result of Sinx : %.4f", sinx);
    return 0;
}