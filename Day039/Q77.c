/* Q77 (2D Arrays)
Check if the elements on the diagonal of a matrix are distinct. */

#include <stdio.h>

int main() {
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

    int distinct = 1;
    for (int a = 0; a < i; a++) {
        for (int b = 0; b < a; b++) {
            if (mat[a][a] == mat[b][b]) {
                distinct = 0;
                break;
            }
        }
        if (distinct == 0) 
            break;
    }

    if (distinct) {
        printf("Distinct!\n");
    } else {
        printf("Not Distinct..\n");
    }
}
