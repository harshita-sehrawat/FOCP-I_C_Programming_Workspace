#include <stdio.h>

int main()
{
int a[10],i,sum=0;
printf("\n Enter the marks for 10 students");
for(i=0;i<10;i++)
{
    printf("\n Enter marks for i=%d",i);
    scanf("%d",&a[i]);
}
for (int i=0;i<10;i++)           //for(int i=0;i>=0;i--)  for reverse
{
    printf("\n marks for i=%d   %d",i,a[i]);
    sum=sum+a[i];
    
}
printf("\n SUM=%d",sum);
return 0;
}
