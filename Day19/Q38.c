/* Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number. */

#include <stdio.h>

int main(){
    int num, reqsum = 0, divideby = 10;
    printf("Enter a number: \n");
    scanf("%d", &num);

    while (num > 0){
        reqsum = reqsum + (num % divideby);
        num = num / divideby;
    }
    printf("The sum of digits is %d", reqsum);
    return 0;

}