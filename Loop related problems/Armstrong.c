#include<stdio.h>
int main(){
    int n,p,r,sum=0;
    printf("Enter The Number :");
    scanf("%d",&n);
    p=n;
    while(n!=0){
        r = n % 10;
        sum = sum + r*r*r;
        n = n / 10;
    }
    if (sum == p){
        printf("%d",sum);
        printf("\n Is Armstrong.\n");
    }else{
        printf("Not Armstrong.");
    }
    return 0;
}