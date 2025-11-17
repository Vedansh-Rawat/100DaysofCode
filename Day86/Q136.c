/* Q136 (Enum)
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

enum Operations {
  ADD , SUBTRACT, MULTIPLY
};

int main(){
  enum Operations O;

  char op[20];
  int num1, num2;

  printf("What do you want to do? (Operation Num1 Num2)\n");
  scanf("%s %d %d", op, &num1, &num2);

  for (int i = 0; op[i] != '\0'; i++){
    op[i] = toupper(op[i]);
  }

  if (strcmp(op, "ADD") == 0){
    printf("%d", num1 + num2);
    return 0;
  }
  else if (strcmp(op, "SUBTRACT") == 0){
    printf("%d", num1 - num2);
    return 0;
  }
  else if (strcmp(op, "MULTIPLY") == 0){
    printf("%d", num1 * num2);
    return 0;
  }
  else{
    printf("Invalid Input.");
    return 0;
  }

}