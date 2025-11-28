/* Q147 (Enum)
Store employee data in a binary file using fwrite() and read using fread(). */

#include <stdio.h>

struct EmpDetails{
  char name[50];
  int ID;
  float sal;
};

int main(){
  FILE *fptr;
  struct EmpDetails emp, reading;
  printf("Enter employee name: \n");
  fgets(emp.name, sizeof(emp.name), stdin);
  for (int i = 0; emp.name[i] != '\0'; i++){
    if (emp.name[i] == '\n'){
      emp.name[i] = '\0';
    }
  }

  printf("Enter employee ID: \n");
  scanf("%d", &emp.ID);

  printf("Enter employee Salary: \n");
  scanf("%f", &emp.sal);

  fptr = fopen("employee.dat", "wb");
  fwrite(&emp, sizeof(struct EmpDetails),1,fptr);
  fclose(fptr);
  getchar();

  fptr = fopen("employee.dat", "rb");
  fread(&reading, sizeof(reading),1, fptr);
  fclose(fptr);

  printf("Employee Details: \n");
  printf("Name: %s || ID: %d || Salary: %.2f\n", reading.name, reading.ID, reading.sal);

}