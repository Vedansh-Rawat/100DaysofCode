/* Q94 (Strings)
Find the longest word in a sentence. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int maxlength = 0,currlength = 0,start = 0,maxstart = 0;
    int i = 0, found = 0;
    printf("Enter any string: \n");
    fgets(str,sizeof(str),stdin);

    while (str[i] != '\0'){
        if ((isalpha(str[i]))){
            if (currlength == 0){
                start = i;        
            }
        currlength++;
        }
        else {
            if (maxlength < currlength){
                maxlength = currlength;
                maxstart = start;
            }
        currlength = 0;
        }
    i++;
    }

    if (currlength > maxlength){
        maxlength = currlength;
        maxstart = start;
    }
    
    
    printf("Longest word is: ");
    for (i = 0; i< maxlength; i++){
        putchar(str[maxstart + i]);
    }
    printf("\n");
    return 0;

    }