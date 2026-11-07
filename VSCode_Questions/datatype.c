/* Purpose: To demonstrate the use of Primitive Datatypes and ASCII manipulation.
Harshita Sehrawat
Date: 02-09-2026
Description: This program prints values of different primitive datatypes 
             and demonstrates how characters can be treated as integers. */

#include <stdio.h>

int main()
{

int a=12;
float b=2.0;
double c=3.00000;
char d='F';
printf("Integer value = %d \n",a);
printf("Float value = %f \n",b);       // %nf gives right space , %-nf gives left spaces.
printf("Double value = %lf \n",c);    // .2 limits to 2 decimal places.
printf("Char value = %c \n",d);
printf("%c \n",d+5);
printf("%d",d+5);
return 0;

}