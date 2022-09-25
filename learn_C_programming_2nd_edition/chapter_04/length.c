/*
** length.c
** variables, constants and assigning values
** created on: 2022/09/25
*/
#include <stdio.h>
// function prototypes
void printDistance(double);
double inchesToFeet(double);

int main() {
  double feet = 5280.0;
  double inches = 15;
  printf("feet = %5.4g\n\n", feet);
  printDistance(feet);
  double convertedFeet = inchesToFeet(inches);
  printf("%12.3g inches is equal to %12.3g feet\n", inches, convertedFeet);
}

// Given feet, print the distance in feet and meters.
void printDistance(double feet) {
  printf("The distance in feet is %5.3g\n", feet);
  double meters = feet * .3048;
  printf("The distance in meters is %5.3g\n", meters);
}

double inchesToFeet(double someInches) {
  double resultFeet = someInches * 0.08333;
  return resultFeet;
}
