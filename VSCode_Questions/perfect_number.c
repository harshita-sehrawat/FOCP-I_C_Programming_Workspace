#include<stdio.h>
int perfectNo(int num)
{
int i,sum=0;
for(i=1;i<num;i++)
{
  if(num%i==0)
  sum+=i;

}
if(sum==num)
return 1;
else
return 0;
}

int main()
{
int n;
scanf("%d",&n);
   if(perfectNo(n)==1)
     printf("1");
   
   else
     printf("O");
return 0;     
}
