/*Q128 (File Handling)
Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters. */

#include <stdio.h>
#include <ctype.h>

int main(){

  FILE *fr;

  fr = fopen("text.txt", "r");

  char ch;
  int vow = 0, cons = 0;
  while ((ch = fgetc(fr)) != EOF){
    if (isalpha(ch)){
      ch = toupper(ch);
      if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        vow++;
      }
      else{
        cons++;
      }
    }
  }
  fclose(fr);
  printf("Vowels: %d\nConsonants: %d", vow, cons);
  return 0;
}