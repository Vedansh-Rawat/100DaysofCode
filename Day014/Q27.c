/* Q27 (Loops without Arrays/Strings)
Write a program to print the sum of the first n odd numbers. */

#include <stdio.h>

int main(){
    int n, var = 1, requiredsum = 0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for (var=1; var <=n; var++){
        requiredsum = requiredsum + (2*var - 1);
    }
    printf("The sum of first %d odd numbers is: %d\n", n, requiredsum);
    return 0;
}