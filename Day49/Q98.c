/* Q98 (Strings)
Print initials of a name with the surname displayed in full. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
char str[100];
    printf("Enter any string: \n");
    fgets(str,sizeof(str),stdin);

    int len = strlen(str);
    if (str[len-1] == '\n'){
        str[len-1] = '\0';
    }

    int ls = -1;
    for (int i =0; str[i] != '\0'; i++){
      if (str[i] == ' '){
        ls = i;
      }
    }

    if (ls != -1){
      if (isalpha(str[0])){
        printf("%c.", toupper(str[0]));
      }
      for (int i = 0; i < ls; i++){
        if (str[i] == ' ' && isalpha(str[i+1])){
          printf("%c.", toupper(str[i+1]));
        }
      }
      printf("%s", &str[ls + 1]);
    } else {
      printf("%s", str);
}
}