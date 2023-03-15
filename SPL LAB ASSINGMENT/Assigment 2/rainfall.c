#include <stdio.h>
#include<conio.h>
int main(){
    int rainfall[5000];
    int n=0,avg=0, loop=1;
    while ('!p'){
        printf("======= BD Rainfall Record System =========\n");
        printf("Enter 'a''to take one rainfall amount in mm of a city into 'rainfall' array of size N:\n");
        printf("Enter 'b' to find the average rainfall of all the cities:\n");
        printf("Enter 'c' to count and display the # of cities which have above average rainfall:\n");
        printf("Enter 'q' to quit/exit the menu system:\n");
        printf("Enter your choice:");
        char c;
        scanf("%c",&c);
        switch(c){
            case 'a':
                int value;
                printf("\nEnter a value: ");
                scanf("%d",&value);
                rainfall[n]=value;
                n++;
                break;
            case 'b':
                avg=0;
                for(int i=0;i<n;i++){
                    avg+=(rainfall[i]);
                }
                avg/=n;
                printf("\nAverage is %d\n",avg);
                break;
            case 'c':
                int counter=0;
                for(int i=0;i<n;i++){
                    counter+=(rainfall[i]>avg);//arr[i]>avg is a boolean so it only returns 0 or 1; in case of truth it will return 1 and it will be added to the counter.
                }
                printf("\nAbove average counter is %d\n",counter);
                break;
            case 'q':
                loop=0;
                printf("Quite");
                break;
            default:
                printf("Invalid Input\n");
        }
    }
    return 0;
}