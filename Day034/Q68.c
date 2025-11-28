/* Q68 (Arrays (1D))
Delete an element from an array. */

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

    for (int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }

    // What element do you want to delete?
    int del,pos;
    printf("\nEnter the element you want to delete: \n");
    scanf("%d", &del);

    // Finding the position of the element
    for (int i = 0; i < len; i++) {
    if (arr[i] == del) {
            pos = i;
            break;
        }
    }

    // Deleting the element
    for (int i = pos; i < len - 1; i++) {
        arr[i] = arr[i + 1];
    }
    len--;
    printf("New Array: \n");
    for (int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
}