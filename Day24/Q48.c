/*Q48 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include <stdio.h>

int main(){
    int n=1;
    for (int i=1; i<=5;i++){
        for (int j=1; j<=i;j++){
            printf("%d", n);
            n+=1;
        }
        n = 1;
        printf("\n");
    }
    return 0;
}