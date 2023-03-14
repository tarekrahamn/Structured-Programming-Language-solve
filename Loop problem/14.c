#include<stdio.h>
int main()
{
	int a, b;
	int choice;
	printf("Enter the number of A and B:");
	scanf("%d %d", &a, &b);
	printf("Enter Your Choice:");
	scanf("%d", &choice);

	if (choice == 1)
	{
		printf("Addition: %d\n",  (a + b));
	}
	else if (choice == 2)
	{
		printf("Subtraction %d\n",  (a - b));
	}
	else if (choice == 3)
	{
		printf("Multiplication: %d\n",  (a * b));
	}
	else if (choice == 4 )
	{if(b!=0){
        if(1<= choice<=2){
            printf("Reminder:%d\n",(a%b));
            printf("Quotient: %d\n",  (a/b));
        }
        }else{
		printf("Error: Divisor is zero");
        }
	}

	return 0;
}