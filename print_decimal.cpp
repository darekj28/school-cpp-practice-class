#include <cstdio>

// prints out a number in decimal format
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


