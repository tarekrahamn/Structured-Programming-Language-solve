#include<stdio.h>
int main(){
   char ch;
   printf("\nEnter The Character : ");
   scanf("%c",&ch);
   if(ch >= 'A' && ch <= 'F' || ch >= 'a' && ch <= 'f' ){      // Hexadecimal Digits are a-f, A-F
      printf("character is Hexadecimal Digit");
   }else{
      printf("character is not Hexadecimal Digit");
   }
   return 0;
}