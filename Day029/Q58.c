/* Q58 (Arrays (1D))
Find the maximum and minimum element in an array. */

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n;i++){
        printf("Enter element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];

    for (int j = 0; j<n; j++){
        if (arr[j] > max){
            max = arr[j];
        }

        if (arr[j] < min){
            min = arr[j];
        }
    }

    printf("Max: %d\nMin: %d\n", max, min);
}