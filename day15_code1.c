//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
    int n,s=1;
    printf("enter the value f n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s*=i;
    }
    printf("the factorial of %d is %d",n,s);
    return 0;
}
