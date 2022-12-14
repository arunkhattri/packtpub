#include <stdio.h>
void doubleFunc(double dbl);
void longintFunc(long int li);

int main() {
  float floatValue = 58.73;
  short int intValue = 13;

  longintFunc(intValue);
  longintFunc(floatValue); // possible truncation
  doubleFunc(floatValue);
  doubleFunc(intValue);
}

void doubleFunc(double dbl) { printf("doubleFunc %.2f\n", dbl); }

void longintFunc(long int li) { printf("longintFunc %ld\n", li); }
