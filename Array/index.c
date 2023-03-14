#include<stdio.h>
int main()
{
    int myArray[9]={1, 23, 10, 15, 17, 21, 44, 43, 53};
    int i,j,count=0;
    for(i=0;i<9;i++)
    {
        for(j=1;j<=myArray[i];j++)
        {
            if(myArray[i]%j==0)
            {
                count++;
            }

        }
        if(count==2)
            printf("%d is a prime, index: %d\n",myArray[i],i);
        count=0;
    }


    return 0;
}

