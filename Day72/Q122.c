/* Q122 (File Handling)
Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached. */

#include <stdio.h>

int main(){
  FILE *fptr;
  fptr = fopen("info.txt", "r");
  char str[500];

  while (fgets(str, sizeof(str), fptr) != NULL){
    printf("%s", str);
  }

}