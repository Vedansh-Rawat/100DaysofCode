/* Q74 (2D Arrays)
Find the transpose of a matrix. */

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

    int tp[j][i];
    
    for (int a =0; a<i; a++){
        for (int b=0; b<j; b++){
            tp[a][b] = mat[b][a];
        }
    }

    printf("Your matrix: \n");
    for (int a = 0; a<i; a++) {
        for (int b=0;b<j; b++){
            printf("%d\t", mat[a][b]);
        }
        printf("\n");
    }

    printf("Transpose of your matrix: \n");
    for (int a = 0; a<i; a++) {
        for (int b=0;b<j; b++){
            printf("%d\t", tp[a][b]);
        }
        printf("\n");
    }
}