//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){
    int n,s=0;
    printf("enter the value of n= ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i+=2){
        s+=i;
    }
    printf("the sum of first %d odd digits is %d",n,s);
    return 0;
}