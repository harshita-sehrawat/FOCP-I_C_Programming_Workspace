//Student Format

#include<stdio.h>

int main()
{
char n;
int a;
float b;
char c;                   
printf("\n Name:");
scanf(" %s",&n);
printf("\n Age:");
scanf(" %d",&a);             
printf("\n Height:");
scanf("%f",&b);
printf("\n Grade:");
scanf(" %c",&c);
printf("\n Name: %s \n Age: %d  \n Height: %f \n Grade: %c",n,a,b,c);
return 0;
}