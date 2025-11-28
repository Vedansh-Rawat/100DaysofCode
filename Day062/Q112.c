/* Q112 (Logic Enhancers)
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element. */

#include <stdio.h>
 
int main(){
  int len;

  printf("Enter the length of array: \n");
  scanf("%d", &len);
  int nums[len];
  for (int i = 0; i < len; i++){
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums[i]);
  }

  int max = nums[0];
  int currsum = nums[0];

  for (int i = 1; i < len; i++){
    if (currsum + nums[i] > nums[i]){
      currsum = currsum + nums[i];
    }
    else{
      currsum = nums[i];
    }
    if (currsum > max){
      max = currsum;
    }
  }

  printf("Maximum Subarray Sum: %d\n", max);
  return 0;
}