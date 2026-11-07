//Simple Calculator

#include <stdio.h>
int main()
{
int f,s,sum,d,m,di;

printf("First Number:");
scanf("%d",&f);
printf("Second Number:");
scanf("%d",&s);
sum = f + s;
printf("Sum: %d\n", sum);
d= f-s;
printf("Difference: %d\n", d);
m=f*s;
printf("Multiplication: %d\n", m);
di=f/s;
printf("Division: %d\n", di);
return 0;
}