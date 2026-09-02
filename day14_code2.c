//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){
    int n,s=0;
    printf("enter the value of n= ");
    scanf("%d",&n);
    for(int i=2;i<=2*n;i+=2){
        s+=i;
    }
    printf("sum of first %d even numbers is %d\n",n,s);
    return 0;
}