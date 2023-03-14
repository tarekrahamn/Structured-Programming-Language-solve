/**
 * C program to print diamond star pattern 
 */

#include <stdio.h>

int main()
{
    int i, j, rows;                            //Declare two variables to keep track of total columns to print each row,
    int stars, spaces;
   
    printf("Enter rows to print : ");
    scanf("%d", &rows);
    
    
    stars = 1;
    spaces = rows - 1;
    
    // Iterate through rows 
    for(i=1; i<rows*2; i++)             // To iterate through rows, run an outer loop from 1 to rows*2-1. The loop structure should look like 
    {
        // Print spaces 
        for(j=1; j<=spaces; j++)       //To print spaces, run an inner loop from 1 to spaces. The loop structure should look like
            printf(" "); 
        
        // Print stars 
        for(j=1; j<stars*2; j++)         // Inside this loop print single space.
                                         //To print stars, run another inner loop from 1 to stars*2-1. The loop structure should look like
            printf("*");
        
        // Move to next line 
        printf("\n");
        
        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
    
    return 0;
} 
 