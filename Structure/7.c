#include <stdio.h>
struct student
{
    char firstName[50];
    int id;
    float CGPA;
} s[5];
int main() 
{
    int i;
    printf("Enter information of students:\n");
    for (i = 0; i < 2; ++i) 
    {
        printf("Enter first name: ");
        fflush(stdin);
        gets(s[i].firstName);
        printf("Enter The Id : ");
        scanf("%d",&s[i].id);
        printf("Enter CGPA: ");
        scanf("%f", &s[i].CGPA);
    }
    printf("Displaying Information:\n\n");
    for (i = 0; i < 2;i++) 
    {
        printf("%s",s[i].firstName);
        printf("\n");
        printf("%d",s[i].id);
        printf("\n");
        printf("%.2f", s[i].CGPA);
        printf("\n");
    }
    return 0;
}