/* Q2
Playing with characters */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char str[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", str);
    getchar();
    fgets(sen,sizeof(sen),stdin);
    
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s", sen);    
    return 0;
}