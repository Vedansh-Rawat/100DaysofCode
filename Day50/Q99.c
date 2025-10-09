/* Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy. */

#include <stdio.h>

int main(){
  char *arr[] = {"Jan", "Feb", "Mar","Apr","May","Jun", "Jul","Aug","Sep","Oct","Nov","Dec"};
  int day,month,year;
  printf("Enter the date (Day Month Year) (Seperated by /): ");
  scanf("%d/%d/%d", &day, &month, &year);
  char date[10];
  sprintf(date, "%02d-%s-%d", day, arr[month-1],year);
  printf("%s", date);
}