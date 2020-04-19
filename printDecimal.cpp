void printDecimal(unsigned long x){
  if (x < 0){
    putchar('-');
    x = -x;
  }
  
  if (x > 0){
    printDecimal(x/10);
  }
  putchar(x % 10 + '0');
}