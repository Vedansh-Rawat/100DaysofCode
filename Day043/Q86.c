/* Q86 (Strings)
Check if a string is a palindrome. */

#include <stdio.h>

int main(){
    // Reversing the string
    char str[100], strtemp[100];
    int i = 0, j =0, len = 0;
    printf("Enter any string: \n");
    scanf("%s", str);
    
    while (str[j] != '\0'){
        strtemp[j] = str[j];
        j++;
    }
    strtemp[j] = '\0';

    while (str[i] != '\0'){
        len+=1;
        i++;
    }

    int temp;
    for (int x = 0, y = len - 1; x<y; x++ , y--){
        temp = str[x];
        str[x] = str[y];
        str[y] = temp;
    }

    // Checking for palindrome
    int flag = 1;
    for (int m = 0; m < len; m++){
        if (strtemp[m] != str[m]){
            flag = 0;
        }
    }

    if (flag == 1){
        printf("The string is a palindrome.");
    }
    else{
        printf("The string is not a palindrome.");
    }
}