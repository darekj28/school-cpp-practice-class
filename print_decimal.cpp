#include <cstdio>

// prints out a number in decimal format
// without using printf.
// We print each character 1 at a time
// Using modular arithmetic.
void printDecimal(int x){
  if (x < 0){
    putchar('-');
    x = -x;
  }
  
  if (x > 9){
    printDecimal(x/10);
  }
  putchar(x % 10 + '0');
}


