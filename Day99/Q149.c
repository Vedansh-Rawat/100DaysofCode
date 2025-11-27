/* Q149 (Enum)
Use malloc() to allocate structure memory dynamically and print details. */

#include <stdio.h>
#include <stdlib.h>

struct Student{
  char name[50];
  int roll;
  int marks;
};


int main(){
  struct Student *S;

  S = (struct Student *)malloc(sizeof(struct Student));

  printf("Enter name: \n");
  fgets(S->name,sizeof(S->name),stdin);
  for (int i = 0; S->name[i] != '\0'; i++){
    if (S->name[i] == '\n'){
      S->name[i] = '\0';
    }
  }

  printf("Enter roll: \n");
  scanf("%d", &S->roll);

  printf("Enter marks: \n");
  scanf("%d", &S->marks);

  printf("Name: %s || Roll: %d || Marks: %d\n", S->name, S->roll, S->marks);
}