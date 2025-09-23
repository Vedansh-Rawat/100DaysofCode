/* Q66 (Arrays (1D))
Insert an element in a sorted array at the appropriate position. */
#include <stdio.h>

int main() {
    int len;
    printf("Enter the length of the array: ");
    scanf("%d", &len);

    int arr[len + 1];

    printf("Enter %d elements in sorted order:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    int newelement;
    printf("Enter a new element to insert: ");
    scanf("%d", &newelement);

    // Find the position to insert
    int pos;
    for (pos = 0; pos < len; pos++) {
        if (arr[pos] > newelement) {
            break;
        }
    }

    // Shift elements to the right
    for (int i = len; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = newelement;
    len++;

    // Print the new array
    printf("Array after insertion:\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
