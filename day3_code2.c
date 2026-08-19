//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{int a,b,c;
printf("enter any two numbers= ");
scanf("%d%d",&a,&b);
c=b;
b=a;
printf("after swap: %d %d\n",c,b);
return 0;}
