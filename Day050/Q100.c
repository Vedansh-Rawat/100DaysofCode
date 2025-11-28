  /* Q100 (Strings)
  Print all sub-strings of a string. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  char str[100];
  printf("Enter any string: \n");
  fgets(str,sizeof(str),stdin);
  int len = strlen(str);
  
  if (str[len - 1] == '\n'){
    str[len - 1] = '\0';
    len--;
  }

  for (int i = 0; i < len; i++){
    for (int j = i; j < len; j++){
      for (int k = i; k<=j; k++){
        printf("%c", str[k]);
        }
      printf("\n");
      }
    }
}