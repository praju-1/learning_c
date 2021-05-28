//C program to calculate EMI.

#include <stdio.h>
#include <math.h>
 
int main() 
{
    float principal, rate, time, emi;
 
    printf("Enter principal: ");
    scanf("%f",&principal);
 
    printf("Enter rate: ");
    scanf("%f",&rate);
 
    printf("Enter time in year: ");
    scanf("%f",&time);
 
    rate=rate/(12*100); //one month interest
    time=time*12; //one month period
 
 
    emi= (principal*rate*pow(1+rate,time))/(pow(1+rate,time)-1);
 
    printf("Monthly EMI is= %f\n",emi);
     
    return 0;
}
