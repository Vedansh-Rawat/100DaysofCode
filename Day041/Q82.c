/* Q82 (Strings)
Print each character of a string on a new line. */

#include <stdio.h>

int main(){
    char str[100];
    int i = 0;
    printf("Enter any string: \n");
    scanf("%s", str);
    while (str[i] != '\0'){
        printf("%c\n", str[i]);
        i++;
    }
}