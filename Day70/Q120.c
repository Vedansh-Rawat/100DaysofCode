/* Q120 (Logic Enhancers)
Write a program to take a string input. Change it to sentence case. */

#include <stdio.h>
#include <ctype.h>

int main(){
  char str[200];
  printf("Enter any sentence: \n");
  fgets(str, sizeof(str), stdin);
  
  for (int i = 0; str[i] != '\0'; i++){
    if (str[i] == '\n'){
      str[i] = '\0';
    }
  }

  str[0] = toupper(str[0]);
  for (int i = 0; i < 200; i++){
    if (str[i] == ' '){
      str[i+1] = toupper(str[i+1]);
    }
  }

  printf("%s", str);

}