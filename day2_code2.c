//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.14159
float main()
{float r,a,c;
printf("enter radius of circle= ");
scanf("%f",&r);
a=PI*r*r;
c=2*PI*r;
printf("area=%f,circumference=%f\n",a,c);
return 0;}
