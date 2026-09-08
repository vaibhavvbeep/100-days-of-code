//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){
    int a,b,c=1,d=0;
    printf("enter a number= ");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        if(b%2!=0){
            c*=b;
            d++;
        }
        a/=10;
    }
    if(d==0)
    printf("product of all odd digits= %d",d);
    else
    printf("product of all odd digits= %d",c);
    return 0;
}