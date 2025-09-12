
#include <stdio.h>

int main(){
    int n;
    float sum=0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (int i = 1, j = 1, k=0; i <= n ; i++, j++, k++){
        
        float numerator = 2*i;
        float denominator = 3*j + k ;
        float frac = numerator/denominator;
        sum = sum + frac;
    
    }

    printf("The required sum is: %.2f", sum);
}