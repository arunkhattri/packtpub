#include <stdio.h>

int sum_n_do_while(int);

int main() {
  int N = 0;
  printf("Enter digit to sum: ");
  scanf("%d", &N);
  printf("Sum of digits 1 - %d: %d\n", N, sum_n_do_while(N));
}

int sum_n_do_while(int N) {
  int sum = 0;
  int num = 0;
  do {
    sum += (num + 1);
    num++;
  } while (num < N);
  return sum;
}
