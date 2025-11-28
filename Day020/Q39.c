/* Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number. */

#include <stdio.h>

int main(){
    int number, oddnums=1;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number >= 1){
         if (number == 1){
            printf("No odd digits found.");
            return 0;
        }
        else if (number % 2 == 0) {
            number = number / 10;
        }
        else if (number % 2 != 0) {
            oddnums = oddnums * (number % 10);
            number = number / 10;
        }
       
    }
    printf("Product of odd digits: %d", oddnums);
    return 0;
}