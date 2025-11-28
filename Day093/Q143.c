/* Q143 (Enum)
Find and print the student with the highest marks. */

#include <stdio.h>
#include <string.h>

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

  int highestmarks = 0;
  char topper[50];
  for (int i = 0; i < 5; i++){
    if (highestmarks < S[i].Marks){
      highestmarks = S[i].Marks;
      strcpy(topper, S[i].name);
    }
  }

  printf("Topper: %s || Marks: %d\n", topper, highestmarks);
}