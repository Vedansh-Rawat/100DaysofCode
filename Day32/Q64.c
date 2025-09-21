/* Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number. */

#include <stdio.h>

int main(){
    int num, arr[10] = {0}, tempnum;
    printf("Enter a number: \n");
    scanf("%d", &num);
    tempnum = num;

    int mod, digit = 0;
    while (num != 0){
        mod = num % 10;
        arr[mod] += 1;
        num = num/10;
    }
    
    int max = 0;
    for (int i=0; i<10; i++){
        if (arr[i] > max){
            max = arr[i];
            digit = i;
        }
    }

    printf("The digit that occurs the most is: %d", digit);
}