/*Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation. */

#include <stdio.h>

int main(){
    int num, binary= 0, place=1;
    printf("Enter a number: \n");
    scanf("%d", &num);

    while (num>0) {
        binary = binary + (num % 2) * place;
        num = num / 2;
        place = place * 10;
    }
    printf("The binary representation is: %d", binary);
    return 0;
}