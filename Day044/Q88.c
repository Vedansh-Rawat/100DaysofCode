/*Q88 (Strings)
Replace spaces with hyphens in a string. */

#include <stdio.h>
#include <ctype.h>

int main(){
    
    char str[100];
    int i = 0;
    printf("Enter any string: \n");
    fgets(str,sizeof(str),stdin);

    while (str[i] != '\0'){
        if (str[i] == ' '){
            str[i] = '-';
        }
    i++;
    }
    printf("%s", str);
}