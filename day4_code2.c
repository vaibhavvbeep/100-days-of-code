
//Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main()
{int n,i;
float s=0;
printf("enter value of n= ");
scanf("%d",&n);
for(i=1;i<=n;i++)
s+=i;
printf("sum=%f\n",s);
return 0;}

