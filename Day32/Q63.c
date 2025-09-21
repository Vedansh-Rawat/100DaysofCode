/* Q63 (Arrays (1D))
Merge two arrays. */

#include <stdio.h>

int main(){
    int len1,len2;

    printf("Enter the length of 1st array: \n");
    scanf("%d", &len1);
    int arr1[len1];
    for (int i = 0; i<len1; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the length of 2nd array: \n");
    scanf("%d", &len2);
    int arr2[len2];
    for (int i = 0; i<len2; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr2[i]);
    }

    int arrmerg[len1 + len2];

    for (int i = 0; i<len1; i++){
        arrmerg[i] = arr1[i];
    }

    for (int i = 0; i<len2; i++){
        arrmerg[len1+i] = arr2[i];
    }

    for (int i = 0; i < len1+len2; i++){
        printf("%d ", arrmerg[i]);
    }
}