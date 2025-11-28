/* Q137 (Enum)
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role. */

/* Q134 (Enum)
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

enum Operation{
 GUEST, USER, ADMIN
};


int main(){
  enum Operation O;
  char rank[50];
  printf("Enter your rank:  \n");
  scanf("%s", rank);

  for (int i = 0; rank[i] != '\0'; i++){
    rank[i] = toupper(rank[i]);
  }

  if (strcmp(rank, "GUEST") == 0){
    O = GUEST;
  }
  else if (strcmp(rank, "USER") == 0){
    O = USER;
  }
  else if (strcmp(rank, "ADMIN") == 0){
    O = ADMIN;
  }
  else{
    printf("Invalid Input.");
    return 0;
  }
  
  switch(O){
    case GUEST: printf("Welcome Guest!"); break;
    case USER: printf("Welcome User!"); break;
    case ADMIN: printf("Welcome Admin!"); break;
  }
}