#include <stdio.h>
int main(){
  int Integer;
  char Character;
  float InputFloat;
 
  printf(" Please Enter a Character :  ");
  scanf("%c", &Character);
  
  printf(" Please Enter an Integer Value :  ");
  scanf("%d", &Integer);
  
  printf(" Please Enter Float Value :  ");
  scanf("%f", &InputFloat);    
  
  printf(" \n The Integer Value that you Entered is :  %d", Integer);
  printf(" \n The Character that you Entered is :  %c", Character);
  printf(" \n The Float Value with precision 2 is :  %.6f", InputFloat);

  return 0;
}