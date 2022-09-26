#include <stdio.h>
int sum_gauss(int);

int main() {
  int n = 0;
  printf("Enter number: ");
  scanf("%d", &n);

  printf("Sum of 1 - %d numbers: %d\n", n, sum_gauss(n));
}

int sum_gauss(int N) {
  int sum = 0;
  sum = N * (N + 1) / 2;
  return sum;
}
