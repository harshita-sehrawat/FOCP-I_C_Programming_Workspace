#include <stdio.h>

int main()
{
    float marks[10];
    for (int i=0;i<10;i++)
    {
        printf("\n Enter the marks %f",i);
        scanf("%f",&marks[i]);
    }

    for(int i=0;i<10;i++)
    {
        printf("\n%f   %f",marks[i]);
    }
return 0;    
}
