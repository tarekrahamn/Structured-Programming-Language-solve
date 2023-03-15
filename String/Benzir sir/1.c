#include <stdio.h>
#include <string.h>
void main()
{
    char str1[50];
    int i, l = 0;

    printf("\n\nFind the length of a string:\n ");
    printf("Input a string : ");
    gets(str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        l++;
    }
    printf("the length of the string  : %d\n\n",  l);
}