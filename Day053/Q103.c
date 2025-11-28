/* Q103 (Logic Enhancers)
Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1. */

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

    printf("Your array is: \n");
    for (int i = 0; i<len; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
  
    // Finding the pivot
    int sum = 0;
    int Rsum,Lsum = 0,flag = 0,pivot = -1;
    for (int i = 0; i < len; i++){
      sum += nums[i];
    }

    for (int i = 0; i < len; i++){
      Rsum = sum - Lsum - nums[i];
      if (Rsum == Lsum){
        pivot = i;
        flag = 1;
        break;
      }
      Lsum += nums[i];
    }

    if (flag == 1){
      printf("The pivot element has index %d.", pivot);
    }
    else if (flag == 0){
      printf("No Pivot exists. -1");
    }
}