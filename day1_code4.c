//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{int a,b,s,d,p,q;
printf("enter any two number = ");
scanf("%d%d",&a,&b);
s=a+b;
d=a-b;
p=a*b;
if(b==0)
{printf("sum=%d,diference=%d,product=%d,quotient= can't divide number by zero\n",s,d,p);}
else
{q=a/b;
printf("sum=%d,diference=%d,product=%d,quotient=%d\n",s,d,p,q);}
return 0;}
