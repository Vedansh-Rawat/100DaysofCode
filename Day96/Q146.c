/* Q146 (Enum)
Create Employee structure with nested Date structure for joining date and print details. */

#include <stdio.h>

struct Date{
  int JoiningYear;
  int JoiningMonth;
  int JoiningDay;
};

struct Employee{
  char name[50];
  int ID;
  struct Date JD;
};

int main(){
  struct Employee emp;

  printf("Enter Employee name: \n");
  fgets(emp.name,sizeof(emp.name),stdin);

  for (int i = 0; emp.name[i] != '\0'; i++){
    if (emp.name[i] == '\n'){
      emp.name[i] = '\0';
    }
  }
  printf("Enter ID: \n");
  scanf("%d", &emp.ID);

  printf("Enter Joining Date: \n");
  scanf("%d %d %d", &emp.JD.JoiningDay, &emp.JD.JoiningMonth, &emp.JD.JoiningYear);

  getchar();

  printf("Name: %s || ID: %d || Joining Date: %d/%d/%d", emp.name, emp.ID, emp.JD.JoiningDay, emp.JD.JoiningMonth, emp.JD.JoiningYear);
}