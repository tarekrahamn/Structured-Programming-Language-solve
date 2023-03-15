#include<stdio.h>
int main()
{
    char str1[50], str2[50];
    int i=0, chk=0;
    printf("Enter First String: ");
    gets(str1);
    printf("Enter Second String: ");
    gets(str2);
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            chk = 1;
            break;
        }
        i++;
    }
    if(chk==0)
        printf("\nStrings are Equal");
    else
        printf("\nStrings are not Equal");
    return 0;
}