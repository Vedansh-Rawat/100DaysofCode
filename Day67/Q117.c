/* Q117 (Logic Enhancers)
Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array. */

#include <stdio.h>

int main(){
  int len1, len2;

  printf("Enter the length of array 1: \n");
  scanf("%d", &len1); 
  int nums1[len1];
  for (int i = 0; i < len1; i++){
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums1[i]);
  }

  printf("Enter the length of array 2: \n");
  scanf("%d", &len2); 
  int nums2[len2];
  for (int i = 0; i < len2; i++){
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums2[i]);
  }

  int merg[len1 + len2];
  
  for (int i = 0; i < len1; i++){
    merg[i] = nums1[i];
  }
  for (int i = 0; i < len2; i++){
    merg[len1 + i] = nums2[i];
  }

  for (int i = 0; i < len1 + len2; i++){
    for (int j = 0; j < len1 + len2 - i - 1; j++){
      if (merg[j] > merg[j+1]){
        int temp = merg[j];
        merg[j] = merg[j+1];
        merg[j+1] = temp;
      }
    }
  }

  printf("Merged and sorted array: \n");
  for (int i = 0; i < len1 + len2; i++){
    printf("%d ", merg[i]);
  }
}