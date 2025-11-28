/* Q105 (Logic Enhancers)
Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times. */

#include <stdio.h>

int main(){
  // Making the array
  int len;
  printf("Enter the length of array: \n");
  scanf("%d", &len);
  int nums[len];
  for (int i = 0; i < len; i++){
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums[i]);
  }

  int try = 0;
  int count = 0;
  for (int i = 0; i<len; i++){
    if (count == 0){
      try = nums[i];
      count+=1;
    }
    else if (nums[i] == try){
      count++;
    }
    else{
      count--;
    }
  }

  count = 0;
  for (int i = 0; i < len; i++){
      if (nums[i] == try){
        count++;
      }
  }

  if (count > len/2){
    printf("Majority Element is: %d",try);
  }
  else{
    printf("No element in Majority. -1");
  }

}