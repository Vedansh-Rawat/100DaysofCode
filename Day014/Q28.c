/*Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n. */

#include <stdio.h>

int main(){
    int n, var, prod = 1;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for (var=2; var<=n; var = var + 2){
        prod = prod * var;
    }
    printf("The required product is: %d", prod);
    return 0;
}