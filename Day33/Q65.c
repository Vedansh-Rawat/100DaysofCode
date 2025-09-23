/*Q65 (Arrays (1D))
Search in a sorted array using binary search. */

#include <stdio.h>

int main(){
    int len;

    printf("Enter the length of the array: \n");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i<len; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int pass = 0; pass < len - 1; pass++) {
    for (int i = 0; i < len - pass - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
    printf("Sorted Array: \n");
    for (int i =0; i<len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0, high = len - 1, mid;
    int found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;

}
