#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *student;
    char name[100];
    int num,i,Id ;
    student=fopen("test.txt","a");
    if(student==NULL)
    {
        printf("The dose not open");
    }
    else
    {
        //printf("File is open\n");
        printf("Enter The number student:");
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            printf("Enter The Name:");
            fflush(stdin);
            gets(name);
            printf("Enter Your ID Number:");
            scanf("%d",&Id);
            fprintf(student,"\n%s\t\t%d\n",name,Id);
        }
        fclose(student);
    }
}