#include<stdio.h>
int main()
{
    int   my_Array[3][3], i, j, sum=0;
    printf("Enter Ther NUmber:\n");
    for(i = 0;i < 3;i++)                      //for row
    {
        for(j = 0;j < 3;j++)          //for column
        {
            scanf("%d", &my_Array[i][j]);
        }
    }

    for(i = 0;i < 3;i++)                      //for row
    {
        for(j = 0;j < 3;j++)         //for column
        {
               printf("% d",my_Array[i][j]);
                sum = sum + my_Array[i][j];
        }
        printf("\n");
    }
     printf ("The sum is:%d",sum);
    return 0;

}
