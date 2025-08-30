/* Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers. */

#include <stdio.h>
int main(){
    int n, sum;
    printf("Enter any natural number: ");
    scanf("%d", &n);

    sum = n* (n+1)/2;
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}