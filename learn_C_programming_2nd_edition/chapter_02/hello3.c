/*
** hello3.c
** functions with parameters
** created: 2022/09/24
*/
#include <stdio.h>

void printComma(void) { printf(", "); }

void printWord(char *word) { printf("%s", word); }

void printGreeting(char *greeting, char *addressee) {
  printWord(greeting);
  printComma();
  printWord(addressee);
  printf("!\n");
}

int main() {
  printGreeting("Hello", "world");
  printGreeting("Good day", "Your Royal Highness");
  return 0;
}
