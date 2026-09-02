//Q30: Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int n,rev,d;
    printf("enter a number= ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    printf("output= %d",rev);
    return 0;
}