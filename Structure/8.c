#include <stdio.h>
struct student
{
    char Name[50];
    int id;
    float CGPA;
} s[5];
int main() 
{
    int i;
    printf("Enter information of students:\n");
    for (i = 0; i < 2; ++i) 
    {
        fflush(stdin);
        gets(s[i].Name);
        printf("Enter The Id : ");
        scanf("%d",&s[i].id);
        printf("Enter CGPA: ");
        scanf("%f", &s[i].CGPA);
    }
    printf("Displaying Information:\n\n");
    float max =s[0].CGPA;
    for (i = 0; i < 2;i++) 
    {
        if(max<s[i].CGPA)
        {
            max=s[i].CGPA;
        printf("%s",s[i].Name);
        printf("\n");
        printf("%d",s[i].id);
        printf("\n");
        printf("%.2f", max);
        printf("\n");
        }
    }
    return 0;
}