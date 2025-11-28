/* Q56 (Arrays (1D))
Read and print elements of a one-dimensional array. */

#include <stdio.h>

int main(){
    int len;
    printf("Enter the length of the array: ");
    scanf("%d", &len);

    int arr[len];

    printf("Enter elements: ");
    for (int i=0; i<len; i++){    
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are: ");
    for (int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
}