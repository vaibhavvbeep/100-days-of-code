//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
#include <stdio.h>
int main(){
    int a,b;
    printf("enter units of eletricity used= ");
    scanf("%d",&a);
    if(a<=100){
        b=a*5;
        printf("Bill: %d rupees\n",b);
    }
    else if(a<=200){
        b=(100*5)+(a-100)*7;
        printf("Bill: %d rupees\n",b);
    }
    else if(a<=300){
        b=(100*5)+(100*7)+(a-200)*10;
        printf("Bill: %d rupees\n",b);
    }
    else{
        b=(100*5)+(100*7)+(100*10)+(a-300)*12;
        printf("Bill: %d rupees\n",b);
    }
    return 0;
}