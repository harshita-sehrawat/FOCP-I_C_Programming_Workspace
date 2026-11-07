#include <stdio.h>
void pattern()
{
for(int j=1;j<=7;j++)    //outer loop
{
    for(int i=1;i<=5;i++)   //inner loop
    printf("*");
    printf("\n");
}

}

int main()
{
    pattern();
    return 0;
}