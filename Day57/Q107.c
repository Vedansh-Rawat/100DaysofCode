/* Q107 (Logic Enhancers)
Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve. */

#include <stdio.h>

int main(){
  // Making the array
  int len;
  printf("Enter the length of array: \n");
  scanf("%d", &len);
  int nums[len], greaternums[len];
  for (int i = 0; i < len; i++){
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums[i]);
  }

   for (int i = 0; i < len; i++){
    int found = 0;
    for (int j = i-1; j >= 0; j--){
    if (nums[j] > nums[i]){
      greaternums[i] = nums[j];
      found = 1;
      break;
      }
    }
    if (!found){
      greaternums[i] = -1;
    }
  }
  for (int i = 0; i<len; i++){
    if (i == len - 1){
      printf("%d", greaternums[i]);
    }
    else{
    printf("%d, ", greaternums[i]);
    }
  }
}