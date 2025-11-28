/* Q132 (Enum)
Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. */

#include <stdio.h>

enum TrafficLights {
  Green, Red, Yellow
};

int main(){
  char input[10];
  printf("Enter Traffic Light: \n");
  scanf("%s", input);
  
  enum TrafficLights signal;

  if (input[0] == 'R' || input[0] == 'r')
        signal = Red;
    else if (input[0] == 'Y' || input[0] == 'y')
        signal = Yellow;
    else if (input[0] == 'G' || input[0] == 'g')
        signal = Green;
    else {
        printf("Invalid input!\n");
        return 0;
    }

  if (signal == Red){
        printf("Stop\n");
  }
    else if (signal == Yellow){
        printf("Wait\n");
    }
    else if (signal == Green){
        printf("Go\n");
    }
}