/*Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient. */

#include <stdio.h>
int main() {
    int num1, num2;
    float sum, difference, product, quotient;
    printf("Enter first number: ");
    scanf("%d", &num1); 
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("%d + %d = %.2f\n", num1, num2, sum);
    printf("%d - %d = %.2f\n", num1, num2, difference);
    printf("%d * %d = %.2f\n", num1, num2,  product);
    
if (num2 == 0) {
        printf("Division by zero is not allowed.\n");
        return 1;
}   else {
        quotient = (float)num1 / num2;
    }
    
    
    printf("%d / %d = %.2f\n", num1, num2, quotient);
    return 0;
}