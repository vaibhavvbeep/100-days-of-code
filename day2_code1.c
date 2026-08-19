//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{int l,b,a,p;
printf("enter length and bredth= ");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("area of rectangle is %d and perimeter of rectangle is %d\n",a,p);
return 0;}
