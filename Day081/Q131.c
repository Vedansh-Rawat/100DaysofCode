/* Q131 (Enum)
Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value. */

#include <stdio.h>

enum Days {
 Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};  

int main(){
  const char *dayNames[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
  };

  for (int i = Sunday; i <= Saturday; i++){
    printf("%s = %d\n",dayNames[i], i);
  }
}