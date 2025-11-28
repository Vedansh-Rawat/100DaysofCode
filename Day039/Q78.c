/* Q78 (2D Arrays)
Find the sum of main diagonal elements for a square matrix. */

#include <stdio.h>

int main(){
    int i, j;
    printf("Enter Matrix type (i j): \n");
    scanf("%d %d", &i, &j);

    if (i != j) {
        printf("Diagonal elements only exist for n x n matrices. Retry!\n");
        scanf("%d %d", &i, &j);
    }

    int mat[i][j];

    printf("Enter matrix elements: \n");
    for (int a = 0; a < i; a++) {
        for (int b = 0; b < j; b++) {
            scanf("%d", &mat[a][b]);
        }
    }
    
    int sum = 0;
    for (int a = 0; a < i; a++){
        sum = sum + mat[a][a];    
    }
    printf("The sum of the main diagonal elements: %d", sum);
}
