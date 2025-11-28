/* Q150 (Enum)
Use pointer to struct to modify and display data using -> operator. */ 

#include <stdio.h>
#include <stdlib.h>

struct StudData{
    char name[50];
    int roll;
    int marks;
};

int main(){
    struct StudData S;
    struct StudData *ptr = &S;

    printf("Enter name, roll and marks: \n");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    printf("Name: %s || Roll: %d || Marks: %d", ptr->name, ptr->roll, ptr->marks);
}