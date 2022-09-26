#include <stdio.h>
int sum_for(int);

int main() {
  int n = 0;
  printf("Enter digit: ");
  scanf("%d", &n);
  printf("sum of digits 1-%d is %d\n", n, sum_for(n));
}

int sum_for(int n) {
  int sum = 0;
  for (int num = 0; num < n; num++) {
    sum += (num + 1);
  }
  return sum;
}
