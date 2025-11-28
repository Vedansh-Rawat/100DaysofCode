/* Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number. */

#include <stdio.h>
#include <math.h>

int main(){
    int number, noofdig=0, newnum, temp, lastdig, firstdig;
    printf("Enter a num: ");
    scanf("%d", &number);
    temp = number;
    
    // Finding the Number of digits
    while (number > 0){
        number = number / 10; 
        noofdig++;
        }        

    // First, Last and middle digits
    lastdig = temp%10;
    firstdig = (temp / pow(10,noofdig - 1));
    
    int middle = temp % (int)pow(10, noofdig - 1);
    middle = middle / 10;

    // Creating the new number
    newnum = lastdig * pow(10, noofdig-1) + (middle*10) + firstdig;
    printf("New number: %d", newnum);
}