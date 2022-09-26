#include <float.h>
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main() {
  uint16_t biggest = UINT16_MAX;
  uint16_t overflow = biggest + 1;
  printf("Biggest=%d and overflow=%d\n", biggest, overflow);

  int16_t smallest = INT16_MIN;
  int16_t underflow = smallest - 1;
  printf("Smallest=%d and underflow=%d\n", smallest, underflow);

  float fBiggest = FLT_MAX;
  float fOverflow = fBiggest * 2;
  printf("Float Biggest=%g and Float Overflow=%g\n", fBiggest, fOverflow);

  float fSmallest = FLT_MIN;
  float fUnderflow = fBiggest / fSmallest;
  printf("Float Smallest=%g and Float Underflow=%g\n", fSmallest, fOverflow);
}
