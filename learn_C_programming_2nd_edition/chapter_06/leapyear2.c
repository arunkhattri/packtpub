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
  // logic as per https://en.wikipedia.org/wiki/Leap_year
  bool is_leap = false;
  if (yr % 4 != 0) {
    is_leap = false;
  } else if (yr % 400 == 0) {
    is_leap = true;
  } else if (yr % 100 == 0) {
    is_leap = false;
  } else {
    is_leap = true;
  }
  return is_leap;
}
