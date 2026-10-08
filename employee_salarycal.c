//Employee Salary Calculator

#include <stdio.h>
int main()
{
float sal,hra,da,gs;
printf("\n Salary:");
scanf("%f",&sal);
hra= 0.2* sal;
printf("\n HRA:%.2f",hra);
da=0.1* sal;
printf("\n DA:%.2f",da);
gs=sal+hra+da;
printf("\n Gross Salary:%.2f",gs);
return 0;
}