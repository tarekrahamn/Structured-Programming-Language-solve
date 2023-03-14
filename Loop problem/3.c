#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number (less than 10): ");
  scanf("%d", &num);
  printf("\n");
  if(num<10 && num>0)
  {
    if(num==1)
      printf("One");
    else if(num==2)
      printf("2Two");
    else if(num==3)
      printf("3Three");
    else if(num==4)
      printf("Four");
    else if(num==5)
      printf("Five");
    else if(num==6)
      printf("Six");
    else if(num==7)
      printf("Seven");
    else if(num==8)
      printf("Eight");
    else if(num==9)
      printf("Nine");
  }
  else
    printf("Number must be in between 0 and 10");
  return 0;
}