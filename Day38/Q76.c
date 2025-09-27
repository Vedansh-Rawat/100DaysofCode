/* Q76 (2D Arrays)
Check if a matrix is symmetric. */

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

    int flag=0;
    for (int a = 0; a<i; a++){
        for (int b=0; b<j; b++){
            if (tp[a][b] == mat[a][b]){
                flag = 1;
            }
            else {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1){
        printf("The matrix is symmetric.");
    }
    else {
        printf("The matrix is not symmetric.");
    }
}