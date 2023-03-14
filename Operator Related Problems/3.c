#include<stdio.h>
int main(){
    float a ,b,X=1;
    printf("Enter The number of A:");
    scanf("%f",&a);
    printf("Enter The number of B:");
    scanf("%f",&b);

    X = X = (3.31 * a*a + 2.01 * b*b*b) / (7.16 * b*b + 2.01 * a*a*a);
    printf("X = %f",X);
    return 0;
}