#include<stdio.h>
void printHW(int count);
int main (){
    printHW(5);




    return 0;
}
//Recursion function
void printHW(int count){
    if(count == 0){
        return ;
    }
    printf("Hellow World\n");
    printHW(count - 1);
}