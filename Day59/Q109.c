/* Q109 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k. */

#include <stdio.h>

int main(){
  int len, k;

  printf("Enter the length of array: \n");
  scanf("%d", &len);
  int nums[len];
  for (int i = 0; i < len; i++){
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums[i]);
  }
  printf("Enter the size of sub arrays you want: \n");
  scanf("%d", &k);

  int sum;
  int maxsum = 0;
  for (int i = 0; i < k; i++){
    maxsum += nums[i];
  }

  for (int i = 0; i <= len-k; i++){
    int currsum = 0;
    for (int j = i; j < i + k; j++){
      currsum += nums[j];
    }
  if (currsum > maxsum){
    maxsum = currsum;
  }
  } 

  printf("Maximum sum of all sub arrays of size %d : %d",k, maxsum);
}