//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter cost price= ");
    scanf("%d",&a);
    printf("enter selling price= ");
    scanf("%d",&b);
    if(a>b){
        c=a-b;
        d=(c*100)/a;
        printf("loss %d%%",d);
    }
    else{
        c=b-a;
        d=(c*100)/a;
        printf("profit %d%%",d);
    }
    return 0;
}