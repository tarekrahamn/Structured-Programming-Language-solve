#include<stdio.h>
int main()
{
  int player1_Input,a,b,c;
  printf("Enter The Number:\n");
  scanf("%d",&player1_Input);
  scanf("%d",&a);
  if(player1_Input == a)
 {
  printf("Right, player2 wins!\n");
 }
  else if(player1_Input !=a)
 {
  printf("Wrong, 2  Choice(s) Left.\n");
 
  scanf("%d",&b);
  if(player1_Input == b)
 {
  printf("Right, player2  wins!\n");
 }
  else if(player1_Input !=b)
   {

  printf("Wrong, 1 Choice(s) Left.\n");

  scanf("%d",&c);
  if(player1_Input == c)
 {
   printf("Right , player 2 wins!\n");
 }
  else if (player1_Input!=c)
 {
  printf("Wrong, 0 Choice(s) Left.\n");
  printf("player 1 wins.\n");
 }
   }
 }
 return 0;
}