/*Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle given its length and breadth. */

#include <stdio.h>

int main(){
    int length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);
    return 0;
}