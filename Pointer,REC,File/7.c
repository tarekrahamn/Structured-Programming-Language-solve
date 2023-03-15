#include <stdio.h>
void main() 
{
    int arr1[10];
    int i,n, sum = 0;
    int *pt;
    printf(" Input the number of elements to store in the array (max 10) : ");
    scanf("%d",&n);
    printf(" Input %d number of elements in the array : \n",n);
    for(i=0;i<n;i++)
    {
        printf(" element - %d : ",i+1);
        scanf("%d",&arr1[i]);
	} 	
    pt =&arr1; 
    for (i = 0; i < n; i++) 
    {
        sum = sum + *pt;
        pt++;
    }
    printf(" The sum of array is : %d\n\n", sum);
}