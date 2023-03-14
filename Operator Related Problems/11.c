#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number of A:");
    scanf("%d",&a);
    printf("Enter the number of B:");
    scanf("%d",&b);
    printf("Enter the number of C:");
    scanf("%d",&c);

    if((a+b) <= 80 && c>= 0){
    printf("1) 1\n");
    }else{
    printf("1) 0\n");
    }

    if((a - b) == 0 || c!= 0){
    printf("1) 1\n");
    }else{
    printf("0\n");
    }

    if(a!= b || !(b < c) && c > 0){
    printf("2) 1\n");
    }else{
    printf("2) 0\n");
    }

    if((a!= b || !(b < c) ) && c > 0){
    printf("3) 1\n");
    }else{
    printf("3) 0\n");
    }

return 0;
}