/* Q114 (Logic Enhancers)
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output. */

#include <stdio.h>
#include <string.h>

int main(){
  char str[100];
  int allalpha[26] = {0}; 
  printf("Enter a string: \n");
  fgets(str, sizeof(str), stdin);

  int maxlen = 0, currlen = 0;

  for (int i = 0; i < strlen(str); i++){
    int index = str[i] - 'a';

    if (allalpha[index] == 1){
      for (int j = 0; j < 26; j++){
        allalpha[j] = 0;
      }
      currlen = 0;
    }

    allalpha[index] = 1;
    currlen++;
    if (currlen > maxlen){
      maxlen = currlen;
    }
  }
  printf("Length of Longest Substring: %d\n", maxlen);
}