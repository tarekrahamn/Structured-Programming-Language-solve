#include<stdio.h>
int main(){
    char input1[100],input2[100],temp[100];
    int i=0;
    printf("Enter the Input 1:");
    gets(input1);
    printf("Enter the Input 2:");
    gets(input2);
    
    while(input1[i]!='\0'){
        temp[i] = input1[i];
        i++;
    }
    temp[i] = '\0';
    i=0;
    while(input2[i]!='\0'){
        input1[i] = input2[i];
        i++;
    }
    input1[i] = '\0';
    i=0;
    while(temp[i]!='\0'){
        input2[i] = temp[i];
        i++;
    }
    input2[i] = '\0';
   printf("First String = %s\tSecond String = %s",input1, input2);
    return 0;
}
