//Q38: Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
    int n,b,c=0;
    printf("enter a number=");
    scanf("%d",&n);
    while(n>0){
        b=n%10;
        n/=10;
        c+=b;
    }
    printf("sum of digits= %d\n",c);
    return 0;
}