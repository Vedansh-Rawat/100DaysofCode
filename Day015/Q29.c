/*Q29 (Loops without Arrays/Strings)
Write a program to calculate the factorial of a number. */

#include <stdio.h>

int main(){
    int n, var, factorial = 1;
    printf("Enter the value you want to find the factorial of: \n");
    scanf("%d", &n);
    
    if (n>0){
    for (var=1; var<=n; var++){
        factorial = factorial * var;
    }}
    else if (n==0){
        factorial = 1;
    }
    else{
        printf("Factorial is not defined for negative numbers.");
        return 0;
    }

    printf("The factorial of %d is: %d", n, factorial);
    return 0;
}