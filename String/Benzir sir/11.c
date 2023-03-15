#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100 //Declare the maximum size of the string

int  main()
{
    char str[str_size];
    int digit , i = 0;
    printf("\n\nCount total number of  digits  characters :\n");	
    printf("Input the string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        i++;
    }
    printf("Number of Digits in the string is : %d\n", digit);
    return 0;
}