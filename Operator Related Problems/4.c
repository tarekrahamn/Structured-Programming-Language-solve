#include<stdio.h>
int main (){
    int x,y=0;
    printf("Enter The Number:");
    scanf("%d",&x);
    
printf("X++:%d\n",x=x+1);
printf("++X:%d\n",++x);
printf("X--:%d\n",x=x-1);
printf("--X:%d\n",--x);
return 0;
}