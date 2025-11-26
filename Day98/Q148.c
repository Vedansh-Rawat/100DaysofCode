/* Q148 (Enum)
Take two structs as input and check if they are identical. */

#include <stdio.h>
#include <string.h>

struct struc1{
  char name[50];
  int roll;
  int marks;
};

struct struc2{
  char name[50];
  int roll;
  int marks;
};

int main(){
  struct struc1 Student1;
  struct struc2 Student2;

  printf("For Structure 1: \n");
  printf("Enter name for Student 1: \n");
  fgets(Student1.name, sizeof(Student1.name), stdin);
  for (int i = 0; Student1.name[i] != '\0'; i++){
    if (Student1.name[i] == '\n'){
      Student1.name[i] = '\0';
    }
  }
  printf("Enter roll number for Student 1: \n");
  scanf("%d", &Student1.roll);
  printf("Enter marks for Student 1: \n");
  scanf("%d", &Student1.marks);
  
  getchar();
  
  printf("For Structure 2: \n");
  printf("Enter name for Student 2: \n");
  
  fgets(Student2.name, sizeof(Student2.name), stdin);
  for (int i = 0; Student2.name[i] != '\0'; i++){
    if (Student2.name[i] == '\n'){
      Student2.name[i] = '\0';
    }
  }
  printf("Enter roll number for Student 2: \n");
  scanf("%d", &Student2.roll);
  printf("Enter marks for Student 2: \n");
  scanf("%d", &Student2.marks);

  if ((strcmp(Student1.name,Student2.name) == 0) && Student1.roll == Student2.roll && Student1.marks == Student2.marks){
    printf("Same\n");
    return 0;
  }
  else{
    printf("Not same\n");
    return 0;
  }
}