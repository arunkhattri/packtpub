#include <stdbool.h>
#include <stdio.h>

bool is_leap_yr(int);

int main() {
  int yr;
  printf("Determine if a year is a leap year or not.\n\n");
  printf("Enter year: ");
  scanf("%d", &yr);

  // simple version
  if (is_leap_yr(yr))
    printf("[s] %d is a leap year\n", yr);
  else
    printf("[s] %d is not a leap year\n", yr);

  // more C-like version
  printf("[c] %d is%sa leap year\n", yr, is_leap_yr(yr) ? " " : " not ");
}

bool is_leap_yr(int yr) {
  // leap year if evenly divisible by 400
  if ((yr % 4 == 0) && (yr % 400 == 0) || (yr % 100 != 0))
    return true;
  return false;
}
