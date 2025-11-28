/* Q23 (Conditional Statements)
Write a program to calculate a library fine based on late days. */

/* Assuming the following fine structure:
1–5 days = ₹2 per day
6–10 days = ₹4 per day
11–15 days = ₹6 per day
16–30 days = ₹15 per day
31+ days = Membership cancelled. */

#include <stdio.h>

int main(){
    int latedays;
    printf("Enter number of late days: \n");
    scanf("%d", &latedays);
    if (latedays <= 5){
        printf("Fine: %d Rupees \n", latedays * 2);
    }
    else if (latedays >= 6 && latedays <= 10){
        printf("Fine: %d Rupees \n", latedays * 4);
    }
    else if (latedays >= 11 && latedays <= 15){
        printf("Fine: %d Rupees \n", latedays * 6);
    }
    else if (latedays >= 16 && latedays <= 30){
        printf("Fine: %d Rupees \n", latedays * 15);
    }
    else if (latedays >= 31){
        printf("Membership cancelled.\n");
    }
    return 0;
}

