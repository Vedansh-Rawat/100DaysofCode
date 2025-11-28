/*Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */

#include <stdio.h>

int main(){
    char op;
    float num1, num2, result;
    printf("Give calculator input (num1 num2 operator): \n");
    scanf("%f %f %c", &num1, &num2, &op);
    switch(op){
        case '+':
            result = num1 + num2;
            printf("Result: %.2f \n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f \n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f \n", result);
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                printf("Result: %.2f \n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if((int)num2 != 0){
                result = (int)num1 % (int)num2;
                printf("Result: %f \n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("You can only use +, -, *, /, or %%.\n");
    }
}