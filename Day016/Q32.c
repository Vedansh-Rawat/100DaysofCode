/*Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome. */

#include <stdio.h>

int main(){
    int number;
    int revnum = 0, remainder, orignum;
    printf("Enter a number: ");
    scanf("%d", &number);
    orignum = number;
    while (number>0){
        remainder = number % 10;
        revnum = revnum * 10 + remainder;
        number = number / 10;
    }
    if (orignum == revnum) {
        printf("The number is a palindrome.");
    }
    else{
        printf("The number is not a palindrome.");
    }
}