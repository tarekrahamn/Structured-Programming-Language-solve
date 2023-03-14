#include<stdio.h>
#define CYCLE 60
#ifdef _WING32
#include<conio.h>
#define sleep(x) Sleep(x*1000)
#else
#define clrscr() printf("\e[1;1H\e[2]")
#include<unistd.h>
#endif

int main (){
    int hour, minute,second;
    printf("Enter Hour Minute Second :");
    scanf ("%d%d%d",&hour,&minute,&second);
    clrscr();

    int h = 0, m = 0, s = 0;
    while (1)
    {
       printf("\n\n******** STOP WATCH ********\n\n");
       printf("          %.2d:%.2d:%.2d\n",h,m,s);
       printf("\n\n##############################\n\n");
       if(h == hour && m == minute && s == second){
        break;
       }else
       {
        clrscr();
       }
       s++;
       sleep(1);
       if(s == CYCLE){
        m++;
        s = 0;
       }
       if(m == CYCLE){
        h++;
        m = 0;
       }
    }
    return 0;
}