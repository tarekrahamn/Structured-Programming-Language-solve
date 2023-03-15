#include<stdio.h>
#include<string.h>
/*void main()
{
    char str1[100] = "Hello";
char str2[100] = "Bonjour";
int i, k;
strcat(str1, "Maria");
strcpy(str2, "Federick");
i=strlen(str1);
for(k=0; str2[k] !='\0'; k++)
str1[i+k] = str2[k];
puts(str2);
printf("\n");
puts(str1);
printf("\n");
strrev(str1);
puts(str1);
}*/
int main()
{
	FILE *number;
	number=fopen("sample.txt","r");
	float a,b,add;
	scanf("%f%f",&a,&b);
	while(!feof(number))
    {
		fscanf(number,"%f%f",&a,&b);
        add=a+b;
	    printf("%f",add);
    }
	return 0;
}