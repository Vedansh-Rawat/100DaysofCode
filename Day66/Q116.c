/* Q116 (Logic Enhancers)
Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1". */

#include <stdio.h>
 
int main(){
  int len;

  printf("Enter the length of array: \n");
  scanf("%d", &len);
  int nums[len];
  for (int i = 0; i < len; i++){
    do {
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums[i]);
    if (nums[i] < 0){
      printf("Invalid Input. Enter Positive Integers only!\n");
    }
  }
  while (nums[i] < 0);
  }

  int target;
  printf("Enter target: \n");
  scanf("%d", &target);

  int out_i = -1, out_j = -1;
  for (int i = 0; i < len; i++){
    for (int j = i+1; j < len; j++){
      if (nums[i] + nums[j] == target){
        out_i = i;
        out_j = j;
        break;
      }
    }
    if (out_i != -1){
      break;
    }
  }

  printf("%d  %d", out_i, out_j);
}