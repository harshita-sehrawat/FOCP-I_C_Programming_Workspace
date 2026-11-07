#include <stdio.h>

int main()
{   
int a[6],i;
printf("\n Enter the marks for 10 students");
for(i=0;i<6;i++)
{
    printf("\n Enter marks for i=%d",i);
    scanf("%d",&a[i]);
}
int max=a[0];
for(int i=1;i<6;i++)
{
    if (max<a[i])
    max=a[i];
}
printf("\n max=%d",max);
return 0;
}