#include<stdio.h>
struct triangle
{
    int triangle_id;
    int base;
    int height;
};
int main()
{
    struct triangle s[100];
    int i,area;
    for(i=1;i<=3;i++)
    {
        printf("Enter The Id: ");
        scanf("%d",&s[i].triangle_id);
        printf("Enter The Base: ");
        scanf("%d",&s[i].base);
        printf("Enter The Height: ");
        scanf("%d",&s[i].height);
    }
    for(i=1;i<=3;i++)
    {
        area = (s[i].base * s[i].height) / 2;
        printf("Area of %d:%d\n",i,area);
    }
    return 0;
}