/* Q140 (Enum)
Define a struct with enum Gender and print person's gender. */

#include <stdio.h>

enum Gender {
  MALE, FEMALE
};

struct person {
  char name[50];
  enum Gender G;
};

int main(){
  struct person p = {"Vedansh", MALE};

  
  if (p.G == MALE){
    printf("Male");
  }
  else {
    printf("Female");
  }
}