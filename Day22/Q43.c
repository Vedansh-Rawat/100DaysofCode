/*Q43 (Loops without Arrays/Strings)
Write a program to check if a number is a strong number. */

#include <stdio.h>

// Finding the factorial
int fact(int i){
    int fact = 1, j = 1;
    while (j <= i){
        fact = fact * j;
        j++;
    }
    return fact;
}

int main(){
    int num, temp, sum = 0, lastdig;
    printf("Enter a number: \n");
    scanf("%d", &num);
    temp = num;
    
    // Loop to calculate the sum of the factorial of all digits of the number
    while (num > 0){    
        lastdig = num % 10;
        sum = sum + fact(lastdig);
        num = num / 10;
    }

    // Checking if the number is strong or not
    if (temp == sum){
        printf("The number is strong.");
    }
    else {
        printf("The number is not strong.");
    }
}