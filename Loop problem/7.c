#include<stdio.h>
int main(){
    int x ,y;
    printf("Enter the number of X:");
    scanf("%d",&x);
    printf("Enter the number of Y:");
    scanf("%d",&y);
    if(x>y){
    printf("%d is greter than %d",x,y);
    }
    else if(x<y){
    printf("%d is less than %d",x,y);
   }else if(x==y){
    printf("%d is equal to %d",x,y);
   }
 return 0;
}