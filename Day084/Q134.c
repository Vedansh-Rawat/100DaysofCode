/* Q134 (Enum)
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

enum Operation{
  SUCCESS, FAILURE, TIMEOUT
};


int main(){
  enum Operation O;
  char state[50];
  printf("Enter the state of the operation: \n");
  scanf("%s", state);

  for (int i = 0; state[i] != '\0'; i++){
    state[i] = toupper(state[i]);
  }

  if (strcmp(state, "SUCCESS") == 0){
    O = SUCCESS;
  }
  else if (strcmp(state, "FAILURE") == 0){
    O = FAILURE;
  }
  else if (strcmp(state, "TIMEOUT") == 0){
    O = TIMEOUT;
  }
  else{
    printf("Invalid Input.");
    return 0;
  }
  
  switch(O){
    case SUCCESS: printf("Operation Successfull!"); break;
    case FAILURE: printf("Operation Failed."); break;
    case TIMEOUT: printf("Operation Timed Out."); break;
  }
}