/* Q129 (File Handling)
A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both. */

#include <stdio.h>
#include <ctype.h>

int main(){

  FILE *fr;
  fr = fopen("data.txt", "r");

  int num, sum = 0, count = 0;
  
  while (fscanf(fr, "%d", &num) == 1){
    sum += num;
    count++;
  }
  fclose(fr);
  printf("Sum: %d\nAverage: %.2f", sum, (float)sum/count);
}