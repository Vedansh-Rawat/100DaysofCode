/* Q130 (File Handling)
Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record. */


#include <stdio.h>
#include <string.h>

int main(){

  FILE *fptr;

  int roll;
  float marks;
  char name[50];

  fptr = fopen("students.txt", "w");
  int n;
  printf("Enter number of students: \n");
  scanf("%d", &n);
  getchar();

  for (int i = 0; i < n; i++){
    printf("Enter name: \n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter Roll Number: \n");
    scanf("%d", &roll);

    printf("Enter marks: \n");
    scanf("%f", &marks);
    getchar();
    fprintf(fptr, "%s %d %.2f\n", name, roll, marks);
  }
  fclose(fptr);

  fptr = fopen("students.txt", "r");
  
  while(fscanf(fptr, "%s %d %f", name, &roll, &marks) == 3){
  
    printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
  }
  fclose(fptr);
  
}