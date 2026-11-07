#include<stdio.h>

int main()
{
 int age=18;
 char name[50];
 
 printf("Enter name:");
 fgets(name,sizeof(name),stdin);

 printf("Age: %d\n",age);
 printf("Name: %s",name);

 return 0;
}