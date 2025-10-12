/* Q1
Print HelloWorld */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    printf("Hello, World!\n");
    printf("%s", str);    
}