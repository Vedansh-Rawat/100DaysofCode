/*Q36 (Loops without Arrays/Strings)
Write a program to find the HCF (GCD) of two numbers. */

#include <stdio.h>

int main(){
    int number1,number2, i=1, hcf=1, smallernum, biggernum;

    printf("Enter two numbers: \n");
    scanf("%d %d", &number1, &number2);

    if (number1<number2){
        smallernum=number1;
        biggernum=number2;
    }
    else {
        smallernum=number2;
        biggernum=number1;
    }

    while (smallernum >= i){
        if (smallernum % i == 0 && biggernum % i == 0){
            hcf = i;
        }
        i++;
    }
    printf("The HCF is %d", hcf);
    return 0;

}