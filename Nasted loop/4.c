#include<stdio.h>
int main()
{
  int i,j,k,n;
  printf("Enter the number:");
  scanf("%d",&n);           ;
  for(i=1;i<=n;i++)
  {
    for(j=n;j>=1;j--)
    {
      if(j > i)
        printf(" ");
      else
        printf("%d",i);
    }
    printf("\n");
  }
  return 0;
}