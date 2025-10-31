/* Q119 (Logic Enhancers)
Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration. */

#include <stdio.h>

int main(){
  int len;
  printf("Enter length of the array: \n");
  scanf("%d", &len);
  int nums[len];

  for (int i = 0; i < len; i++){
    printf("Enter element number %d: \n", i + 1);
    scanf("%d", &nums[i]);
  }

  for (int i = 0; i < len - 1; i++){
    for (int j = 0; j < len - 1; j++){
      if (nums[j] > nums[j+1]){
        int temp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = temp;
      }
    }
  }

  int repeating = -1;
  for (int i = 0; i < len; i++){
    if (nums[i] == nums[i+1]){
      repeating = nums[i];
      break;
    }
  }

  if (repeating != -1){
    printf("The repeating element is: %d", repeating);
  }
  else if (repeating == -1){
    printf("No repeating element");
  }
}