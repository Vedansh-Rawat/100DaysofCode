/* Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time. */

#include <stdio.h>
#include <math.h>
int main(){
    float principal, rate, time, simple_interest, compound_interest,final_amount;
    printf("Enter principal amount: ");
    scanf("%f", &principal);    
    printf("Enter rate of interest: ");
    scanf("%f", &rate); 
    printf("Enter time: ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    final_amount = principal * pow((1 + rate / 100), time);
    compound_interest = final_amount - principal;

    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    return 0;
}

