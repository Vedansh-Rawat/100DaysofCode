/*Q87 (Strings)
Count spaces, digits, and special characters in a string. */

#include <stdio.h>
#include <ctype.h>

int main(){
    
    char str[100];
    int i = 0;
    printf("Enter any string: \n");
    fgets(str,sizeof(str),stdin);
    int spaces = -1, digits = 0, spchar = 0;
    while (str[i] != '\0'){
        if (isdigit(str[i])){
            digits++;
        }
        else if (isspace(str[i])){
            spaces++;
        }
        else if (!isalpha(str[i])){
            spchar++;
        }
        i++;
    }

    printf("Number of spaces: %d\nNumber of digits: %d\nNumber of special characters: %d\n", spaces,digits,spchar);
    return 0;
}