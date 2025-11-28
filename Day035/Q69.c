/* Q69 (Arrays (1D))
Find the second largest element in an array. */

#include <stdio.h>

int main(){

    // Making the array
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int arr[len];
    printf("Enter %d elements:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], secondmax = arr[0];
    // Finding the largest element
    for (int i = 0; i<len; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        
    // Second largest element
    for (int i=0; i<len;i++){
        if (arr[i] > secondmax && arr[i] < max){
            secondmax = arr[i];
            }
        }    
    }
    printf("The second largest element is: %d", secondmax);
}