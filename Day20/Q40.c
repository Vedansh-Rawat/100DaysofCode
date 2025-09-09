#include <stdio.h>

int main(){
    int place = 1, bin, lastdig, onescomp = 0;
    printf("Enter a binary number: \n");
    scanf("%d", &bin);
    while (bin > 0) {
        lastdig = bin % 10;
        if (lastdig == 0){
            lastdig = 1;
        }
            else {
            lastdig = 0;
        }
        onescomp = (place*lastdig) + onescomp;
        place = place*10;
        
        bin = bin/10;
    }
    printf("The ones complement is %d", onescomp);
}



