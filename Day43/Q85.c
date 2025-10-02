/* Q85 (Strings)
Reverse a string. */

#include <stdio.h>

int main(){
    char str[100];
    int i = 0,len = 0;
    printf("Enter any string: \n");
    scanf("%s", str);

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
    printf("%s", str);

}