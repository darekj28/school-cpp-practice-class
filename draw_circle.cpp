#include <math.h>
const int kMaxDegrees = 360;

// 
void drawCircle(int center_x, int center_y, int r){
  for (int t = 0; t<kMaxDegrees; t++){
    DrawLine(
	    	center_x + r*cos(t), center_y+r*sin(t), 
	    	center_x+r*cos(t+1), center_y+ r*cos(t+1)
    	);
  }
}