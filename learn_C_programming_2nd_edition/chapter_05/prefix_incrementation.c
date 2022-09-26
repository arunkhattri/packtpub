/*
** prefix_incrementation.c
** Postfix versus prefix incrementation
*/
#include <stdio.h>

int main() {
  int a_value = 5;
  // prefix incrementation
  printf("Initial: %d\n", a_value);
  printf(" Prefix: %d\n", ++a_value);
  printf("  Final: %d\n", a_value);

  a_value = 5; // reset value
  // postfix incrementation
  printf("Initial: %d\n", a_value);
  printf("Postfix: %d\n", a_value++);
  printf("  Final: %d\n", a_value);

  // predicatable result: increment in isolation.
  a_value = 5;
  ++a_value;
  printf("++a_value (alone) == %d\n", a_value);

  a_value = 5;
  a_value++;
  printf("a_value++ (alone) == %d\n", a_value);
}
