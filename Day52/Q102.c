/* Q102 (Logic Enhancers)
Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence. */

#include <stdio.h>

int main(){
    // Making the sorted array
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int nums[len];
    for (int i = 0; i < len; i++){
        printf("Enter element %d: \n", i+1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < len; i++){
        for (int j = 0; j < len - 1; j++){
            if (nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    printf("Your array is: \n");
    for (int i = 0; i<len; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");

    // Getting x
    int x, res = -1;
    printf("Enter the value of x: \n");
    scanf("%d", &x);

    // Looping through the array to find element greater than x
    for (int i = 0; i < len; i++){
      if (x <= nums[i]){
          res = i;
          break;
      }
    }
    if (res != -1){
    printf("The index of element greater than or equal to %d in the array is %d. The number is %d.", x,res, nums[res]);
    }
    else{
      printf("Element greater than %d does not exist. -1", x);
    }
}