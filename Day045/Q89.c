/*Q89 (Strings)
Count frequency of a given character in a string. */


#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int i = 0, count = 0;
    char occof;
    printf("Enter any string: \n");
    scanf("%s", str);
    printf("Enter the character you want to find: \n");
    scanf(" %c", &occof);

    while (str[i] != '\0'){
        if (str[i] == occof){
            count++;
        }
        i++;
    }
    printf("Occurance of %c: %d", occof, count);
}