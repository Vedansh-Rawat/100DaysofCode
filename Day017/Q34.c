/* Q34 (Loops without Arrays/Strings)
Write a program to check if a number is prime. */

#include <stdio.h>

int main(){
    int number, i=2,flag=1;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number<=1){
        printf("Neither prime nor composite.");
        return 0;
    }

    while (number >= i*i){
        if (number % i == 0){
            flag=0;
            break;
        }
        i++;
    }

    if (flag==1) {
        printf("Prime number.");
    }
    else {
        printf("Not a prime number.");
    }

    return 0;
}