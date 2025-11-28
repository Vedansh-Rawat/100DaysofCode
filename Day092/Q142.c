/* Q142 (Enum)
Store details of 5 students in an array of structures and print all. */

#include <stdio.h>

struct StudentData {
  char name[50];
  int Roll;
  int Marks;
};

int main(){
  struct StudentData S[5];

  for (int i = 0; i < 5; i++){
    printf("Enter your name: \n");
    fgets(S[i].name,sizeof(S[i].name), stdin);
    for (int j = 0; S[i].name[j] != '\0'; j++){
      if (S[i].name[j] == '\n'){
      S[i].name[j] = '\0';
      }
    }

    printf("Enter your roll number: \n");
    scanf("%d", &S[i].Roll);

    printf("Enter marks: \n");
    scanf("%d", &S[i].Marks);
    getchar();
  }

  for (int i = 0; i < 5; i++){
    printf("Name: %s || Roll: %d || Marks: %d\n", S[i].name, S[i].Roll, S[i].Marks);
  }
}