#include <math.h>
#include <stdio.h>

int main() {
  double number, square_root;

  printf("Enter a number: ");
  scanf("%lf", &number);

  /* Computing the square root */
  square_root = sqrt(number);
  printf("Square root of %.2lf = %.2lf\n", number, square_root);
}
