/* Q113 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output. */

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

  int k;
  printf("Enter the value of k: \n");
  scanf("%d", &k);

  for (int i = 0; i < len - 1; i++){
    for (int j = 0; j < len-i-1; j++){
      int temp;
      if (nums[j] > nums[j+1]){
        temp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = temp;
      }
    }
  }
  printf("The k'th smallest element is %d\n", nums[k-1]);
}