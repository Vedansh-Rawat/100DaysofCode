/*Q61 (Arrays (1D))
Search for an element in an array using linear search. */

#include <stdio.h>

int main(){
    int len,find;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int arr[len], flag =0;

    for (int i=0; i<len; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to find: ");
    scanf("%d", &find);
    
    for (int i=0; i<len; i++){
        if (arr[i] == find){
            printf("Found at index %d.", i);
            flag = 1;
            break;
        }
        else {
            continue;
        }
    }

    if (flag == 0){
        printf("Not Found.");
    }
}