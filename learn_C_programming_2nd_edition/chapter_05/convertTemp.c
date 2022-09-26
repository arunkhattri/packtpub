/*
** convertTemp.c
*/
#include <stdio.h>

// function prototype
double celsiusToFahrenheit(double degreesC);
double fahrenheitToCelcius(double degreesF);

int main() {
  int c = 0;
  int f = 32;

  printf("%4d Celsius    is %4d Fahrenheit\n", c, (int)celsiusToFahrenheit(c));
  printf("%4d Fahrenheit is %4d Celsius\n", f, (int)fahrenheitToCelcius(f));

  c = 100;
  f = 212;

  printf("%4d Celsius    is %4d Fahrenheit\n", c, (int)celsiusToFahrenheit(c));
  printf("%4d Fahrenheit is %4d Celsius\n", f, (int)fahrenheitToCelcius(f));
}
// Given a celcius temp, convert it to Fahrenheit.
double celsiusToFahrenheit(double degreesC) {
  double deegreesF = (degreesC * 9.0 / 5.0) + 32;
  return deegreesF;
}

// Given a fahrenheit temp, convert it to celcius.
double fahrenheitToCelcius(double degreesF) {
  double degreesC = (degreesF - 32) * 5.0 / 9.0;
  return degreesC;
}
