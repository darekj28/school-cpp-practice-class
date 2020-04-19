#include <math.h>

void drawCircle(int cx, int cy, int r){
  for (int t = 0; t<360; t++){
    DrawLine(cx + r*cos(t), cy+r*sin(t), cx+r*cos(t+1), cy+ r*cos(t+1));
  }
  
