/* Q80 (2D Arrays)
Multiply two matrices. */

#include <stdio.h>
int main(){
    int i1,j1;
    printf("Enter Matrix type for Matrix 1 (i1 j1): \n");
    scanf("%d %d", &i1, &j1);
    int mat1[i1][j1];
    printf("Enter matrix elements: \n");
    for (int a = 0; a<i1; a++){
        for (int b=0; b<j1; b++) {
            scanf("%d", &mat1[a][b]);
        }
    }

    int i2,j2;
    printf("Enter Matrix type for Matrix 2 (i2 j2): \n");
    scanf("%d %d", &i2, &j2);
    int mat2[i2][j2];
    printf("Enter matrix elements: \n");
    for (int a = 0; a < i2; a++){
        for (int b=0; b<j2 ; b++) {
            scanf("%d", &mat2[a][b]);
        }
    }

    if (j1 != i2){
        printf("Multiplication Not Possible.");
    }
    else {
        int prodmat[i1][j2];
        for (int a = 0; a < i1; a++){
            for (int b = 0; b < j2; b++){
                prodmat[a][b] = 0;
            }
        }

        for (int a =0; a<i1; a++){
            for (int b = 0; b < j2; b++){
                for (int k = 0; k < j1; k++){
                    prodmat[a][b] += mat1[a][k] * mat2[k][b];
                }
            }
        }

        for (int a = 0; a < i1; a++) {
            for (int b = 0; b < j2; b++) {
                printf("%d ", prodmat[a][b]);
            }
            printf("\n");
        }
    }
}
