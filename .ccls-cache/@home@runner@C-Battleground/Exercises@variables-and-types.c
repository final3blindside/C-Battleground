#include <stdio.h>

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;

  sum = a + b + c;

  printf("The sum of a, b, and c is %f.", sum);
  return 0;
}

------------------------------------------------

// C does not have a Boolean type, so we have to define.

#define BOOL char
#define FALSE 0
#define TRUE 1
