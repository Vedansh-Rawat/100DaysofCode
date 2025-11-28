/* Q133 (Enum)
Create an enum for months and print how many days each month has. */

#include <stdio.h>

enum Months{
  January, February, March, April, May, June, July, August, September, October, November, December
};


int main(){
  enum Months month;
  for (month = January; month <= December; month++){
    printf("%d: ", month + 1);

    switch(month){
      case January: printf("Jan - 31 Days\n"); break;
      case February: printf("Feb - 28 or 29 Days\n"); break;
      case March: printf("Mar - 31 Days\n"); break;
      case April: printf("Apr - 30 Days\n"); break;
      case May: printf("May - 31 Days\n"); break;
      case June: printf("June - 30 Days\n"); break;
      case July: printf("July - 31 Days\n"); break;
      case August: printf("Aug - 31 Days\n"); break;
      case September: printf("Sep - 30 Days\n"); break;
      case October: printf("Oct - 31 Days\n"); break;
      case November: printf("Nov - 30 Days\n"); break;
      case December: printf("Dec - 31 Days\n"); break;
    }
  }
}