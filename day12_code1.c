//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("how many days has the submission been delayed= ");
    scanf("%d",&a);
    if(a<=5){
        b=a*2;
        printf("fine %d rupees\n",b);
    }
    else if(a<=10){
        b=(5*2)+(a-5)*4;
        printf("fine %d rupees\n",b);
    }
    else if(a<=30){
        b=(5*2)+(5*4)+(a-10)*6;
        printf("fine %d rupees\n",b);
    }
    else{
        printf("Membership  Cancelled");
    }
    return 0;
}