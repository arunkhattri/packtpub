#include <stdio.h>

const double inches_per_foot = 12.0;
const double inches_per_meter = 39.67;

void print_length(double meters);

int main() {
  print_length(0.0);
  print_length(1.0);
  print_length(inches_per_foot / inches_per_meter);
  print_length(2.5);
}

void print_length(double meters) {
  double feet = meters * inches_per_meter / inches_per_foot;
  printf("Length = %f meter%s\n", meters, meters == 1.0 ? "" : "s");
  printf("Length = %f %s\n\n", feet,
         0.9995 < feet && feet < 1.00005 ? "foot" : "feet");
}
