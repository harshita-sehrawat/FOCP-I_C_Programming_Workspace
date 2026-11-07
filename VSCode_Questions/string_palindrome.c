#include<stdio.h>
#include<string.h>
int main()
{ 
char str1[20],rev[20],str2[20];
printf("\n Enter the string & no");
scanf("%19[^\n]s",str1);

printf("\n original string: %s",str1);
       int j=0;
       for (int i=strlen(str1)-1,j=0;i>=0;i--,j++)
       {
        str2[j]=str1[i];
        
       } 
str2[j]='\0';       
printf("\n reverse string:%s",str2);


if(strcmp(str1,str2))
printf("\n Palindrome");
else
printf("\n Not a Palindrome");
return 0;       

}