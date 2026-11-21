#include<stdio.h>

int main()
{
int test[5][3],r,c;
printf("\n enter value for test:");
for (r=0;r<5;r++)
{
    for (c=0;c<3;c++)
    {
        scanf("%d",&test[r][c]);
    }
}    
printf("\n the test array is:\n");
for(c=0;c<3;c++)
{
    for(r=0;r<3;r++)
    {   
        printf("%d",test[r][r]);
        
    }
    printf("\n");
    
}
for(c=0;c<3;c++)
{
    for(r=0;r<3;r++)
    {   if(r=c)
        printf("%d",test[r][r]);
        
    }
    printf("\n");
    
}
return 0;
}

