#include<stdio.h>
struct triangle
{
    int triangle_id;
    int base;
    int height;
}m[10];
void maximum(){

}
void dispaly(struct triangle s[])
{
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
        area= (m[i].base * m[i].height) / 2;
    }
    int max =area;
    for(i=1;i<=3;i++)
    {
        if(max<area)
        {
            max=area;
            printf("Area of %d:%d\n",i,max);
        }
    }
}
int main()
{
   // struct triangle s[100];
    dispaly(s);
    return 0;
}