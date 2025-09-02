/* Q26 (Loops without Arrays/Strings)
Write a program to print numbers from 1 to n. */

#include <stdio.h>

int main(){
    int n, var = 1;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for (var=1; var<=n; var++){
        printf("%d  ", var);
    }
}