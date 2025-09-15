/*Q51 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

#include <stdio.h>

int main(){
    int n=5;
    for (int i=5; i>=1; i--){
        for (int j=1; j<i; j++){
            printf(" ");  
        }
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
