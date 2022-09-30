#include <stdbool.h>
#include <stdio.h>
/* function prototype */
bool isPrime(int num);
int sumPrimes(int num);

int main() {
  int num;
  printf("Program to find sum of prime numbers in range 1 to given number.\n");
  printf("Enter Number (upper range): ");
  scanf("%d", &num);
  printf("Sum (1 - %d): %d\n", num, sumPrimes(num));
}

int sumPrimes(int num) {
  int sum = 0;

  for (int i = 1; i < (num + 1); i++) {
    /* printf("loop %d\n", i); */

    if (isPrime(i)) {
      sum += i;
      printf("%d ", i);
    }
  }
  printf("\n");
  return sum;
}

bool isPrime(int num) {
  if (num < 2)
    return false;
  if (num == 2)
    return true;
  bool isPrime = true;

  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}
