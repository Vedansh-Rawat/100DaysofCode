/* Q91 (Strings)
Remove all vowels from a string. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int i = 0, j = 0;
    printf("Enter any string: \n");
    fgets(str,sizeof(str),stdin);
    
    while (str[i] != '\0'){
        if (!(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u')){
            str[j] = str[i];
            j++;
        }
        i++;
        
    }
    str[j] = '\0';
    printf("%s", str);
}