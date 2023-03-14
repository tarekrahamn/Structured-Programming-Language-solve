#include<stdio.h>
#include<stdbool.h>
int main(){
    long int  a= 2147483647;
    long long int  b =9223372036854775807 ;
     long double c=1.1E+4932 ;
    short int d = 32767;
    printf("The long int value is:%d \n",a);
     printf("The long long int  value is:%lld \n",b);
      printf("The  long daboul value is:%E \n",c);
       printf("The short int value is:%d \n",d);
       return 0;
}