#include <stdio.h>

int main()
{
    int num1, num2, max;

    /*
     * Input two number from user
     */
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if(num1>num2){
        printf("Max:%d",num1);
    }else if(num1<num2){
    printf("Max :%d",num2);
    }
    

  

    return 0;
}