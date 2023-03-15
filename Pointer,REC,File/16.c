#include<stdio.h>
#include<string.h>
int Check_Palindrome(char str[], int i, int len)
{
     static int count=0;
     if(i<strlen(str))
    if(str[i]==str[len])
    {
        count++;
        Check_Palindrome(str,i+1,len-1);
    }
    return count;
}
int main()
{
    char str[30];
    printf("Enter your String:");
   scanf("%[^\n]",str);
   if(Check_Palindrome(str,0,strlen(str)-1)==strlen(str))
    printf("It is a Palindrome String.");
   else
    printf("It is not a Palindrome String.");
}