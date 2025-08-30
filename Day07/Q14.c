/* Q14 (Conditional Statements)
Write a program to input a character and check whether it is a vowel or consonant using if–else.  */

#include <stdio.h>

int main(){
    char alphabet;
    printf("Enter a character: ");
    scanf(" %c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
        printf("%c is a vowel.\n", alphabet);
    } else {
        printf("%c is a consonant.\n", alphabet);
    }
    return 0;
}
