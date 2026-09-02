//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    char o;
    float a,b,c;
    printf("enter first number= ");
    scanf("%lf",&a);
    printf("enter second number= ");
    scanf("%lf",&b);

    printf("enter a opreator= ");
    scanf("%c",&o);
    switch(o){
        case '+':
        c=a+b;
        printf("%lf+%lf= %lf",a,b,c);
        break;
        case '-':
        c=a-b;
        printf("%lf-%lf= %lf",a,b,c);
        break;
        case '*':
        c=a*b;
        printf("%lf*%lf= %lf",a,b,c);
        break;
        case '/':
        if(b==0){
            printf("can't divide a number by zero, enter a vsalid value of b\n");
        }
        else{
            c=a/b;
            printf("%lf/%lf= %lf",a,b,c);
        }
        break;
        case '%':
        if(b==0){
            printf("can't divide a number by zero, enter a vsalid value of b\n");
        }
        else{
            c =((int)a % (int)b);
            printf("%lf%%%lf= %lf",a,b,c);
        }
        break;
        default:
        printf("invlid opreator, enter a valid one\n");
        break;
    }
    return 0;
}