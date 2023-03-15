#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100000
int main(){
    char str1[MAX_SIZE],str2[MAX_SIZE];
    int i=0,j=0,len=0;

    printf("Enter the string str1 :");
    gets(str1);
    printf("Enter the string str2 :");
    gets(str2);

while(str1[i]!='\0'){
    i++;
    len++;
}
while(str2[j]!='\0'){
    str1[len +j]= str2[j];
    j++;
}
printf("The Concatenate sentence is:%s", str1);
return 0;
}