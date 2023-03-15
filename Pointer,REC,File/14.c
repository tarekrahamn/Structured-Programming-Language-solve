#include<stdio.h>
#include<limits.h>
int FindMax(int arr[],int n)
{
    static int i=0,max=INT_MIN;
        if(arr[i]>=max)
            max=arr[i];
            i++;
            FindMax(arr,n);
    return max;
}
int FindMin(int arr[],int n)
{
    static int i=0,min=INT_MAX;
      if(arr[i]<=min)
            min=arr[i];
            i++;
            FindMin(arr,n);
    return min;
}
int main()
{
    int n,i;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Maximum Element of the array is: %d\n",FindMax(arr,n));
    printf("Minimum Element of the array is: %d",FindMin(arr,n));
}