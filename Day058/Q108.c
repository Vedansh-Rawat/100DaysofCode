/* Q108 (Logic Enhancers)
Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. */

#include <stdio.h>

int main(){
  int len;
  int prod = 1;
  int numofzeros = 0;
  printf("Enter the length of array: \n");
  scanf("%d", &len);
  int nums[len], greaternums[len];
  for (int i = 0; i < len; i++){
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums[i]);
    if (nums[i] == 0){
      numofzeros++;
    }
    else{
    prod *= nums[i];
    }
  } 

  int answer[len];
  for (int i = 0; i < len; i++){
    answer[i] = prod;
  }

  for (int i = 0; i < len; i++){
    if (numofzeros > 1) {
      answer[i] = 0;
    }
    else if (numofzeros == 1){
      if (nums[i] == 0){
        answer[i] = prod;
      }
      else{
        answer[i] = 0;
      }
    }
    else {
    answer[i] = answer[i] / nums[i];
   }
  }

  for (int i = 0; i < len; i++){
    printf("%d ", answer[i]);
  }

}