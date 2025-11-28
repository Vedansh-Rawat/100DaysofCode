/* Q127 (File Handling)
Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt */

#include <stdio.h>
#include <ctype.h>

int main(){

  FILE *fw;
  FILE *fr;

  fw = fopen("output.txt", "w");
  fr = fopen("input.txt", "r");

  char ch;
  
  while ((ch = fgetc(fr)) != EOF){
    if (islower(ch)){
      ch = toupper(ch);
    }
    fputc(ch, fw);
  }

  fclose(fw);
  fclose(fr);

}