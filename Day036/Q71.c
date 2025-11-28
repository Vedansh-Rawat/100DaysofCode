/* Q71 (2D Arrays)
Read and print a matrix. */

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

    printf("Your matrix: \n");
    for (int a = 0; a<i; a++) {
        for (int b=0;b<j; b++){
            printf("%d\t", mat[a][b]);
        }
        printf("\n");
    }
}