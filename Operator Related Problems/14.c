#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float x;
    printf("Enter the number of X:");
    scanf("%f",&x);
    printf("A:%.0f",round(x));
    printf("\nB:%.0f",floor(x));
    printf("\nC:%.1f",x);
return 0;
}
