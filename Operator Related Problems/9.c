#include<stdio.h>
int main(){
    int a,b,c,X,Y,Z;
    scanf("%d%d%d",&a,&b,&c);
    X = a - b / 3 + c * 2 - 1;
    Y = a - ( b / ( 3 + c ) * 2) - 1;
    Z = a - ( ( b / 3) + c * 2) - 1;
    printf("X=%d\n",X);
    printf("Y=%d\n",Y);
    printf("Z=%d",Z);
    return 0;
}