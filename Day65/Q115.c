/* Q115 (Logic Enhancers)
Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram". */

#include <stdio.h>
#include <string.h>

int main(){
  char str1[100], str2[100];
  int count1[26] = {0};
  int count2[26] = {0};

  printf("Enter string 1: \n");
  fgets(str1, sizeof(str1), stdin);
  printf("Enter string 2: \n");
  fgets(str2, sizeof(str2), stdin);

  for (int i = 0; i < strlen(str1); i++){
    int index = str1[i] - 'a';
    count1[index]++;
  }

  for (int i = 0; i < strlen(str2); i++){
    int index = str2[i] - 'a';
    count2[index]++;
  }

  int flag = 1;
  for (int i = 0; i < 26; i++){
    if (count1[i] != count2[i]){
      flag = 0;
    }
  }

  if (flag != 0){
    printf("Anagram.");
  }
  else{
    printf("Not Anagram.");
  }
}