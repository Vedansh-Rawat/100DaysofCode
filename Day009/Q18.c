/* Q18 (Conditional Statements)
Write a program to assign grades based on a percentage input. */ 

#include <stdio.h>

int main(){
    int percentage;
    char grade;
    printf("Enter the percentage: ");
    scanf("%d", &percentage);
    
    if (percentage >= 90){
        grade = 'A';
    } else if (percentage >= 80){
        grade = 'B';
    }
     else if (percentage >= 60){
        grade = 'D';
    } else {
        grade = 'F';
    }
   
    printf("The grade is: %c\n", grade);
}