/*Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number. */

#include <stdio.h>
#include <math.h>

int main(){
    int number, numofdigits=0, sum=0, temp;
    printf("Enter a number: ");
    scanf("%d", &number); 
    temp = number;
    while (number > 0) {
        number = number / 10;
        numofdigits++;
    }
    
    number = temp;

    while (number > 0) {
        int lastdig = number % 10;
        sum += pow(lastdig, numofdigits);
        number = number / 10;         
    }

    if (sum == temp){
        printf("Armstrong number.");
    }
        else {
        printf("Not an Armstrong number.");
    }

    return 0;
}