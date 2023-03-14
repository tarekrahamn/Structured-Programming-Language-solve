#include <stdio.h>
int main()  
{  
    int num1, num2;  
    int add, sub, multi, rem,div;  
    
  
    /* 
     * Read two numbers from user separated by comma 
     */  
    printf("Input any two numbers separated by comma : ");  
    scanf("%d %d", &num1, &num2);  
  
    /* 
     * Performs all arithmetic operations 
     */   
    add = num1 + num2;  
    sub = num1 - num2;  
    multi = num1 * num2;  
    div = num1 / num2;     // i can Use float heare
    rem = num1 % num2;  
  
    /* 
     * Prints the result of all arithmetic operations 
     */  
    printf("The Addition: of the given numbers : %d\n", add);  
    printf("The Subtraction of the given numbers : %d\n", sub);  
    printf("The Multiplication of the given numbers : %d\n", multi);  
    printf("The quotient of the given numbers : %d\n", div);  
    printf("Reminder= %d\n", rem);  
  
    return 0;   
} 