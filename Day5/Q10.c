/* Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format. */

#include <stdio.h>
int main(){
    int seconds, hours, minutes, remaining_seconds;
    printf("Enter time in seconds: ");  
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;    
    remaining_seconds = seconds % 60;
    printf("%d : %d : %d", hours, minutes, remaining_seconds);
    return 0;
}