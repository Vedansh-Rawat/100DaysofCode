/* Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.  */

#include <stdio.h>

int main(){
    int num1, num2, tempnum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    tempnum = num1;
    num1 = num2;
    num2 = tempnum;

    printf("After Swapping:\n num1 = %d\n num2 = %d\n", num1, num2);
    return 0;
}