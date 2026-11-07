#include<stdio.h>
#include<string.h>

int main()
{
char str1[20];
printf("\n Enter the string & no");
scanf("%19[^\n]s",str1);

printf("\n original string: %s",str1);
printf("\n reverse string: ");
       for (int i=strlen(str1)-1;i>=0;i--)
       printf("%c",str1[i]);
return 0;       

}