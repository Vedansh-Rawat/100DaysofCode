/*Q83 (Strings)
Count vowels and consonants in a string. */

#include <stdio.h>

int main(){
    char str[100];
    int i = 0;
    printf("Enter any string: \n");
    scanf("%s", str);

    int vow = 0,con = 0;
    while (str[i] != '\0'){
        if (str[i] == 'a' || str[i]== 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i]== 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vow+=1;
        }
        else{
            con+=1;
        }
        i++;
    }

    printf("The number of vowels are: %d\nThe number of consonants are: %d", vow, con);
}