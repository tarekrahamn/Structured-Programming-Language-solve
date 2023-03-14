#include<stdio.h>
int main (){
    int i,n,k=1,j=2, sum=0;
    printf ("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum= sum+(k*k)*j;
        k++;
        j++;
    }
    printf("%d",sum);
}