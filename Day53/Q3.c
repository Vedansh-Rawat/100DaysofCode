/* Q3
Sum and Difference of Two Numbers. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i1,i2;
    float f1,f2;
    
    scanf("%d", &i1);
    scanf("%d", &i2);
    scanf("%f", &f1);
    scanf("%f", &f2);
    
    printf("%d %d\n", i1+i2, i1-i2);
    printf("%.1f %.1f", f1+f2, f1-f2);
    
    return 0;
}