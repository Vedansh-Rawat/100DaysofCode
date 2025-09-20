/*Q62 (Arrays (1D))
Reverse an array without taking extra space. */

#include <stdio.h>

int main(){
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int arr[len], flag =0;

    for (int i=0; i<len; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    int a = 0, b = len - 1;
        while (a < b) {
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;

            a++;
            b--;
    }

    for (int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
}