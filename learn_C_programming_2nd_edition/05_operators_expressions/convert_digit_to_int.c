#include <stdio.h>

int main() {
  char digit5 = '5';
  char digit8 = '8';
  int sum_digits = digit5 + digit8;
  printf("digit5 + digit8 = '5' + '8' = %d (oh, dear!)\n", sum_digits);

  // get the numerical value of '5'
  char value5 = digit5 - '0';
  // get the numerical value of '8'
  char value8 = digit8 - '0';
  sum_digits = value5 + value8;
  printf("value5 + value8 = 5 + 8 = %d\n", sum_digits);
}
