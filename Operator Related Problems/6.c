#include<stdio.h>
int main(){
    int x,y,multiply,division;
    printf("Enter the number of X:");
    scanf("%d",&x);
    printf("Enter the number of Y:");
    scanf("%d",&y);

    multiply = x * y;
    division = x / y;
    printf("Multiplication:%d\n",multiply);
    printf("Division:%d",division);
    return 0;
}