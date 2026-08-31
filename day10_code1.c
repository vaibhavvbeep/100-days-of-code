//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter three sides of triangle:\n");
    printf("enter first side= ");
    scanf("%d",&a);
    printf("enter second side= ");
    scanf("%d",&b);
    printf("enter third side= ");
    scanf("%d",&c);
    if (a==b && b==c &&c==a)
    printf("the triangle with given sides is equilateral\n");
    else if (a==b || b==c || c==a)
    printf("the triangle with given sides is isoceles\n");
    else
    printf("the tiangle ith given sides is scalene\n");
    return 0;
}