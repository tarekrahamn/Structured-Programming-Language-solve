#include<stdio.h>
int main()
  {
    int d1 = 0 , d2 = 1, n , k=1 , sum=0;
    printf("Enter the nth term:");
    scanf("%d", &n);
    printf("The series: \n");
    for(int i=1 ; i<=n ; i++)
    {
      d1 = d1*10 + i;
      d2 =  k*d1;
      printf("% d" , d2);
      sum =  sum + d2;
      k = 1*k;
    }
    printf("\n Sum = %d",sum);
  }