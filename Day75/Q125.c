/* Q125 (File Handling)
Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content. */

#include <stdio.h>

int main(){

  FILE *fptr;
  fptr = fopen("text.txt", "a");
  char str[500];
  printf("Enter the sentence you want to append to text.txt: \n");
  fgets(str, sizeof(str), stdin);
  for (int i = 0; str[i] != '\0'; i++){
    if (str[i] == '\n'){
      str[i] = '\0';
    }
  }

  fprintf(fptr, "%s", str);
}