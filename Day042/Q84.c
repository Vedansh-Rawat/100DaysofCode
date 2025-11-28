/*Q84 (Strings)
Convert a lowercase string to uppercase without using built-in functions. */

#include <stdio.h>

int main(){
    char str[100];
    int i = 0;
    printf("Enter any string: \n");
    scanf("%s", str);

    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("%s", str);
    return 0;
}