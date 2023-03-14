#include<stdio.h>
int main (){
    int mark;
    printf("Enter the mark of the Student  :\n");
    scanf("%d",&mark);
    if(mark >= 90 && mark <= 100){
        printf("Your gared is :A");
    }else if (mark >= 86 && mark <= 90){
        printf("Your gared is :A-");
    }else if (mark >= 82 && mark <= 86){
        printf("Your gared is :B+");
    }else if (mark >= 78 && mark <= 82){
        printf("Your gared is :B");
    }else if (mark >= 74 && mark <= 78){
        printf("Your gared is :B-");
    }else if (mark >= 70 && mark <= 74){
        printf("Your gared is :C+");
    }else if (mark >= 66 && mark <= 70){
        printf("Your gared is :C");
    }else if (mark >= 62 && mark <= 66){
        printf("Your gared is :C-");
    }else if (mark >= 58 && mark <= 62){
        printf("Your gared is :D+");
    }else if (mark >= 55 && mark <= 58){
        printf("Your gared is :D");
    }else if (mark <55){
        printf("Your gared is :F");
    }
    return 0;
}