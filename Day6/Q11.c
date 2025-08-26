/* Q11 (Conditional Statements)
Write a program to input an integer and check whether it is even or odd using if–else. */

#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}