/* Q37 (Loops without Arrays/Strings)
Write a program to find the LCM of two numbers. */

#include <stdio.h>

int main(){

    // STEP 1 : FINDING THE HCF
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


    // STEP 2 : FINDING THE LCM
    int lcm;
    lcm = (number1 * number2) / hcf;
    printf("\nThe LCM is %d", lcm);
    return 0;

}