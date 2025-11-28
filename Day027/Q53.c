/*Q53 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main(){
    for(int i=1; i<=9; i+=2){
        for (int j=1; j<=i; j++){ 
            printf("*");
        }
        printf("\n");
    }

    for (int k=7; k>=1; k-=2){
        for (int l=1;l<=k;l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}