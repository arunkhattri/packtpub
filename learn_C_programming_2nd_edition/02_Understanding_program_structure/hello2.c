/*
** hello2.c
** demonstrate multiple function
*/
#include <stdio.h>

void printComma() {
  printf(", ");
  return;
}

int main() {
  printf("Hello");
  printComma();
  printf("world!\n");
  return 0;
}
