/*Scanf function
Date: 7.09.2026*/

#include<stdio.h>

int main()
{
int rno;
char c;
float p;

printf("\n Enter 3 digit Roll number:");
scanf("%d",&rno);
printf("\n Section :");
scanf(" %c",&c);             // reading char in between give space.
printf("\n Percentage:");
scanf("%f",&p);
printf("\n Roll number: %10d  \n Section: %14c \n Percentage: %11f",rno,c,p); //for allignment use %n format specifier.
return 0;                   
}