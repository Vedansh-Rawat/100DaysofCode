/* Q123 (File Handling)
Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines. */

#include <stdio.h>
#include <ctype.h>

int main(){
  FILE *fptr;
  fptr = fopen("sample.txt", "r");
  char str[500];
  int numofchar = 0, numofwords = 0, numoflines = 1;
  while (fgets(str, sizeof(str), fptr) != NULL){
    for (int i = 0; str[i] != '\0'; i++){
    
    char ch = str[i];
    
    if (ch != '\n'){
      numofchar++;
    }
    

    if (ch == '\n'){
      numoflines++;
    }
    
    if (!isspace(ch) && (isspace(str[i+1]) || str[i+1] == '\0')){
      numofwords++;
    }
    }
  }

  printf("Number of characters: %d\n", numofchar);
  printf("Number of words: %d\n", numofwords);
  printf("Number of lines: %d\n", numoflines);
  fclose(fptr);
}