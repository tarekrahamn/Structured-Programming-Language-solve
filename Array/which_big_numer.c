#include<stdio.h>
int main(){
    int data[5];
    int count = 0,i;
    for(i=0;i<5;i++){
        scanf("%d",& data[i]);
        if(data[i]>100)
        count= count + 1;
    }
    printf("The Big Number is:%d\n",count);
    

}