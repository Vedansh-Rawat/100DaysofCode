/*Q55 (Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n. */

#include <stdio.h>

int Prime(int n){
    if (n <= 1) {
        return 0;
    }
    int i=2;
    while (i*i <=n){
        if (n %i == 0){
            return 0;
        }
        i++;
    }
        return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime numbers from 1 to %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (Prime(i)) {
            printf("%d ", i);
        }
    }
}