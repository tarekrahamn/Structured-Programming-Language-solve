#include<stdio.h>
struct player
{
    char name;
    char country;
    int run[3];
    int wickets[3];
    int points[3];
};
int main()
{
    struct player info;
    int i,j;
    for(i=1;i<=2;i++)
    {
        printf("Enter Player Name : ");
        gets(info.name);
        printf("Enter Player Country name: ");
        gets(info.country);
        for(j=1;j<=3;j++)
        {
            scanf("%d",&info.run[j]);
            scanf("%d",&info.wickets[j]);
            scanf("%d",&info.points[j]);
        }
    }
    
}
