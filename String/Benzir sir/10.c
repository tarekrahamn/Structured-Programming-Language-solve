#include <stdio.h>
#include <string.h>

int main(){
    char string1[1000];
    int i=0, length;
    int flag = 0;
    printf("Enter a string:");
    gets(string1);
    length=0;
    while (string1[i]!='\0')
    {
        length++;
        i++;
    }
    
    for(i=0;i < length ;i++)
    {
        if(string1[i] !=string1[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    if (flag) 
    {
        printf("%s is not a palindrome", string1);
    }    
    else 
    {
        printf("%s is a palindrome", string1);
    }
    return 0;
}