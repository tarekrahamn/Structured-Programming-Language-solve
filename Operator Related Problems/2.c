#include<stdio.h>
int main(){
    float pi=3.1416,r,A=1;
    printf("Enter the Area:");
    scanf("%f",&r);
    A=2*pi*r;
    printf("Area is:%.2f",A);
    return 0;
}