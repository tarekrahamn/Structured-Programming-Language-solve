#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number of A:");
    scanf("%d",&a);
    printf("Enter the number of B:");
    scanf("%d",&b);
    printf("Enter the number of C:");
    scanf("%d",&c);
    if((a+b)<=80){
        printf("a) 1\n");
    }else{
        printf("a) 0");
    }
    if(!(a+b)){
        printf("b) 1\n");
    }else{
        printf("b) 0\n");
    }
    if(c!=0){
        printf("c) 1\n");
    }else{
        printf("c) 0");
    }
    return 0;
}