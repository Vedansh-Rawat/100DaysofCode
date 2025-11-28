/* Q135 (Enum)
Assign explicit values starting from 10 and print them. */

#include <stdio.h>

enum ExplicitVals {
  A = 10, B, C 
};

int main(){
  const char *values[] = {
    "A", "B", "C"
  };

  for (int i = A; i <= C; i++){
    printf("%s: %d\n", values[i - A], i);
  }
}