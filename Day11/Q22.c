/*Q22 (Conditional Statements)
Write a program to find profit or loss percentage given cost price and selling price. */

#include <stdio.h>

int main(){
    float cp,sp,profit,loss;
    printf("Enter cost price: \n");
    scanf("%f", &cp);
    printf("Enter selling price: \n");
    scanf("%f", &sp);
    if(sp > cp){
        profit = sp - cp;
        printf("Profit Percentage: %.2f%%\n", (profit/cp)*100);
    }
    else if(cp > sp){
        loss = cp - sp;
        printf("Loss Percentage: %.2f%%\n", (loss/cp)*100);
    }
    else{
        printf("No Profit No Loss.\n");
    }
}