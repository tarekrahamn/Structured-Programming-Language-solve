#include <stdio.h>

int main()
{
   int num;

   printf("Enter the number you want to test: ");
   scanf("%d", &num);

   //condition to check whether number is power of two or not
   //performing bitwise operation
   if(num==0)
      printf("Zero is not a valid input");
   else if(num < 0)
      printf("Negative input is not valid");
   else if((num != 0) && ((num &(num - 1)) == 0))
      printf("Yes", num);
   else
      printf("No", num);
 return 0;
}