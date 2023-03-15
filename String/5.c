#include <stdio.h>
void main(){
    char str1[100], str2[100];
    int  i;

       printf("\n\nCopy one string into another string :\n");
       printf("-----------------------------------------\n"); 	
       printf("Input the string : ");
       gets(str1);
	   
    /* Copies string1 to string2 character by character */
    i=0;
    while(str1[i]!='\0')
    {
        str2[i] = str1[i];
        i++;
    }
    //Makes sure that the string is NULL terminated
    str2[i] = '\0';

    printf("\nThe First string is : %s\n", str1);
    printf("The Second string is : %s\n", str2);
    printf("Number of characters copied : %d\n\n",i);
}