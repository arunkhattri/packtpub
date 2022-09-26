#include <stdbool.h>
#include <stdio.h>

void print_logical_AND(bool, bool);

int main() {
  bool one = 1;
  bool zero = 0;
  print_logical_AND(zero, one);
}

void print_logical_AND(bool z, bool o) {
  bool zero_zero = z && z;
  bool zero_one = z && o;
  bool one_zero = o && z;
  bool one_one = o && o;
  printf("AND | %1d | %1d\n", z, o);
  printf("  %1d | %1d | %1d\n", z, zero_zero, zero_one);
  printf("  %1d | %1d | %1d\n", o, zero_one, zero_one);
}
