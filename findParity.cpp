int findParity(int x){
  
  int oddBits = 0;
  
  while(x > 0){
    if(x & 1){
      oddBits++;
    } 
    x = x>>1;
  }
  
  return (oddBits % 2 == 1);
  
}