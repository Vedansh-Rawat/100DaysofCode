/*Q42 (Loops without Arrays/Strings)
Write a program to check if a number is a perfect number. */

#include <stdio.h>
int main(){
    int num, i = 1, sumoffac = 0, perfectornot;
    printf("Enter any number: \n");
    scanf("%d", &num);

    while (i < num){
        if (num % i == 0){
            sumoffac = sumoffac + i;
        }
        i++;
        }
        if (sumoffac == num){
            perfectornot = 1;
        }
                else {
            perfectornot = 0;
        }
    
    

    if (perfectornot == 1){
        printf("The number is perfect.");
    }
    else {
        printf("The number is not perfect.");
    }
}