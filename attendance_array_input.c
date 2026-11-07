#include <stdio.h>

int main()
{
int attendance[10];
for (int i=0;i<10;i++)
{
    printf("\n Enter for index %d",i);
    scanf("%d",&attendance[i]);
}

for (int i=0;i<10;i++)
{
    printf("\n%d",attendance[i]);
}
return 0;



}