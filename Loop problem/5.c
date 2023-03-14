//C program to check whether a number is power of 2 or not

#include <stdio.h>

int main()
{
   int num;

   printf("Enter the number you want to test: ");
   scanf("%d", &num);

   //condition to check whether number is power of two or not
   //performing bitwise operation
   if((num != 0) && ((num &(num - 1)) == 0))
      printf("Yes", num);

   else
      printf("No", num);

 return 0;
}