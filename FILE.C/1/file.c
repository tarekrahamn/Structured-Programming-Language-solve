// Read all data from a file
#include<stdio.h>
int main (){
    FILE *fp;
    fp = fopen("input.txt","r");
    int c;
     while (fp!=NULL) {
        c = fgetc(fp);
        if(c == EOF){
          break;
      }
       printf("%c",c);
    }
    
    return 0;
}
