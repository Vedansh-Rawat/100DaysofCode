/* Q95 (Strings)
Check if one string is a rotation of another. */

#include <stdio.h>
#include <string.h>

int main(){

    char str1[100], str2[100];
    printf("Enter string 1: \n");
    scanf("%s", str1);
    printf("Enter string 2: \n");
    scanf("%s", str2);

    char temp[200];
    strcpy(temp,str1);
    strcat(temp,str1);

    if (strstr(temp,str2)){
        printf("Rotation");
    }
    else{
        printf("Not Rotation");
    }
}