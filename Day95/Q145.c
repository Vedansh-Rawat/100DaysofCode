/* Q145 (Enum)
Return a structure containing top student's details from a function. */

#include <stdio.h>
#include <string.h>

struct StudentData{
  char name[50];
  int roll;
  int marks;
};

struct StudentData topper(struct StudentData S[], int n){
  int topIndex = 0;

  for (int i = 0; i < n; i++){
    if (S[i].marks > S[topIndex].marks){
      topIndex = i;
    }
  }
  return S[topIndex];
}

int main(){
  struct StudentData S[3];
  for (int i = 0; i < 3; i++){
    printf("Enter your name: \n");
    fgets(S[i].name,sizeof(S[i].name), stdin);
    for (int j = 0; S[i].name[j] != '\0'; j++){
      if (S[i].name[j] == '\n'){
      S[i].name[j] = '\0';
      }
    }

  printf("Enter your roll number: \n");
  scanf("%d", &S[i].roll);

  printf("Enter marks: \n");
  scanf("%d", &S[i].marks);
  getchar();
  }
  struct StudentData top = topper(S,3);

  printf("Topper: %s || Roll: %d || Marks: %d\n", top.name, top.roll, top.marks);
}