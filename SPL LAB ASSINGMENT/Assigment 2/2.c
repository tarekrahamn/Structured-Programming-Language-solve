#include <stdio.h>
int main(){
    char s[200];
    int count = 0, i;

    printf("Enter the string:\n");
    gets(s);
    for (i = 0;s[i] != '\0';i++){
            count++;    
    }
    printf("Number of words in given string are: %d\n", count);
    return 0;
}