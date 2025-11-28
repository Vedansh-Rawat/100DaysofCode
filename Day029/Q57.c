/*Q57 (Arrays (1D))
Find the sum of array elements. */

#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n;i++){
        printf("Enter element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int j=0; j<n; j++){
        sum = sum + arr[j];
    }
    printf("The sum of the array: %d", sum);
}