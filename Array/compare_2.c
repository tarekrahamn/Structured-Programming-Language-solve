#include<stdio.h>
int main()
{
    //int x,y;
    float A[ 5];
    float B[ 5];
    int i;
    float avg_A,avg_B,sum_A=0,sum_B=0;
    printf("Enter the number of A:\n");
    //scanf("%d",&x);
    for(i = 0;i < 5;i++)
    {
        scanf("%f",&A[i]);
        sum_A = sum_A + A[i];           //sum of first array
    }
    avg_A = sum_A / 5;             //average of first array
    printf("\n\n");
    printf("Enter The Number of B;\n");
   // scanf("%d",&y);
    for(i = 0;i < 5;i++)
    {
        scanf("%f",&B[i]);
        sum_B = sum_B + B[i];     //sum of second array
    }
    avg_B = sum_B / 5;              //average of second array
    printf("\n\n");

    if(avg_A > avg_B)
    {
        printf("The Avg of A is: %.2f => A\n",avg_A);
    }
    else
    {
        printf(" The Avg of B is : %.2f > B\n",avg_B);
    }

    return 0;
}