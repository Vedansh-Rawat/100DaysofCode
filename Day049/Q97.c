/* Q97 (Strings)
Print the initials of a name. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
char str[100];
    printf("Enter any string: \n");
    fgets(str,sizeof(str),stdin);

    int len = strlen(str);
    if (str[len-1] == '\n'){
        str[len-1] = '\0';
    }

    if (isalpha(str[0])){
        printf("%c.", toupper(str[0]));
    }

    for (int i = 1; str[i] != '\0'; i++){
        if (str[i] == ' ' && isalpha(str[i+1])){
            printf("%c.", toupper(str[i+1]));
        }
    }
}