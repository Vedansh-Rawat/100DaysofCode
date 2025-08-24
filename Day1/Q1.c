/* Q1 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum.  */

#include <stdio.h>
int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);
    return 0;
}
