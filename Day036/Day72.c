/* Q72 (2D Arrays)
Find the sum of all elements in a matrix. */

#include <stdio.h>
int main(){
    int i,j;
    printf("Enter Matrix type (i j): \n");
    scanf("%d %d", &i, &j);
    int mat[i][j];
    printf("Enter matrix elements: \n");
    for (int a = 0; a<i; a++){
        for (int b=0; b<j; b++) {
            scanf("%d", &mat[a][b]);
        }
    }

    int sum =0;
    for (int a=0; a<i; a++){
        for (int b=0; b<j; b++) {
        sum = sum + mat[a][b];
        }
    }
    printf("The sum of all elements of your matrix is: %d", sum);
}