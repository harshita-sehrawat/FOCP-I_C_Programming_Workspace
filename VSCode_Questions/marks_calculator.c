//Students Marks Calculator

#include <stdio.h>
int main()
{
int w,x,z,sum;
float av;
printf("First Subject:");
scanf("%d",&w);
printf("Second Subject:");
scanf("%d",&x);
printf("Third Subject:");
scanf("%d",&z);
sum = w + x + z;
printf("Total: %d\n", sum);
av=sum/3.0;
printf("Average:%f",av);
if(av>=40){
    printf("\n Result=Pass \n");
}
else{
    printf("\n Result=Fail \n");
}
return 0;
}