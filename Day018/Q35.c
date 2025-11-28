/*Q35 (Loops without Arrays/Strings)
Write a program to print all factors of a given number. */ 

#include <stdio.h>

int main(){
    int number, i=1;
    printf("Enter a number: \n");
    scanf("%d", &number);
    while (number >= i){
        if (number % i == 0){
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}