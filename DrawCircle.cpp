#include <math.h>
const int degrees = 360;

void drawCircle(int cx, int cy, int r){
  for (int t = 0; t<degrees; t++){
    DrawLine(cx + r*cos(t), cy+r*sin(t), cx+r*cos(t+1), cy+ r*cos(t+1));
  }
  
}