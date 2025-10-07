/* Q96 (Strings)
Reverse each word in a sentence without changing the word order. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[100];
    printf("Enter string: \n");
    fgets(str,sizeof(str),stdin);

    char temp[200];
    int len = strlen(str);

    if (str[len-1] == '\n'){
        str[len-1] = '\0';
    }

    int start = 0;
    int end;
    for (int i = 0; i <= len; i++){
        if (str[i] == ' ' || str[i] == '\0'){
            end = i - 1;
        
            while (start < end){
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
        
            }
            start = i + 1;
        }
    }
    
    printf("Reversed Sentence: %s", str);
    return 0;
}