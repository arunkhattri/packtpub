#include <stdio.h>
int sum_while(int);

int main() {
  int n = 0;
  printf("Enter digit:  ");
  scanf("%d", &n);
  printf("sum of digits 1-%d is %d\n", n, sum_while(n));
}

int sum_while(int n) {
  int sum = 0;
  int num = 0;

  while (num < n) {
    sum += (num + 1);
    num++;
  }
  return sum;
}
