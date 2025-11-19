/* Q138 (Enum)
Print all enum names and integer values using a loop. */

#include <stdio.h>

enum Colors {
  RED, YELLOW, GREEN
};

int main(){
  const char *col[] = {"Red", "Yellow", "Green"};
  for (int i = RED; i <= GREEN; i++){
    printf("%s: %d\n", col[i] , i);
  }
}