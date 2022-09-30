#include <math.h>
#include <stdbool.h>
#include <stdio.h>
/* function prototype */
bool is_prime(int sum);

int main() {
  int num = 0;
  printf("Enter digit you want to check prime numbers till (from 1): ");
  scanf("%d", &num);
  printf("Prime Numbers: ");
  for (int i = 1; i < num; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");
}

bool is_prime(int num) {
  if (num < 2)
    return false;
  if (num == 2)
    return true;

  bool is_prime = true; // initial assumption that num is prime.
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      is_prime = false;
      break;
    }
  }
  return is_prime;
}
