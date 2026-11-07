#include<stdio.h>
#include<string.h>

int main()
{
char str1[20];
char str2[]="Hello";
char str3[6]="Hello";
char str4[]={'H','e','l','l','o','\0'};
char str5[]={'H','e','\0','l','l','o','\0'};   

printf("\n Str1size=%d  str1 len=%d str1=%s",sizeof(str1),strlen(str1),str1);
printf("\n Str2size=%d  str2 len=%d str2=%s",sizeof(str2),strlen(str2),str2);
printf("\n Str3size=%d  str3 len=%d str3=%s",sizeof(str3),strlen(str3),str3);
printf("\n Str4size=%d  str4 len=%d str4=%s",sizeof(str4),strlen(str4),str4);
printf("\n Str5size=%d  str5 len=%d str5=%s",sizeof(str5),strlen(str5),str5);
}