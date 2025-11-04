/* Q126 (File Handling)
Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content. */

#include <stdio.h>

int main(){
  char filename[100];
  FILE *fptr;

  printf("Enter the file's name: \n");
  scanf("%s", &filename);

  fptr = fopen(filename, "r");

  if (fptr == NULL){
    printf("File not found.");
  }
  else{
    char ch;
    printf("File Content: \n");

    while ((ch = fgetc(fptr)) != EOF){
      putchar(ch);
    }
  }

  fclose(fptr);

}