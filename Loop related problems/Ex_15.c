#include<stdio.h>
int main (){
    int a,n,i,p=1;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        p=p*a;
    }
    printf(" Final Answer is :%d",p);
    return 0;
}
