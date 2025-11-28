/* Q144 (Enum)
Write a function that accepts a structure as parameter and prints its members. */

#include <stdio.h>  

struct StudentData {
  char name[50];
  int roll;
  int marks;
};

int displayStudentData(struct StudentData SData){
  printf("Name: %s || Roll: %d || Marks: %d", SData.name, SData.roll, SData.marks);
}


int main(){
  struct StudentData S;

  printf("Enter your name: \n");
  fgets(S.name,sizeof(S.name), stdin);
  for (int j = 0; S.name[j] != '\0'; j++){
    if (S.name[j] == '\n'){
    S.name[j] = '\0';
    }
  }

  printf("Enter your roll number: \n");
  scanf("%d", &S.roll);

  printf("Enter marks: \n");
  scanf("%d", &S.marks);

  displayStudentData(S); 
}