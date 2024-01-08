#include <math.h>
#include "graphics.h"
#include "picture.hpp"

void sun( int x, int y){
   cleardevice();
   setcolor(YELLOW);
   setlinestyle(SOLID_LINE, 0,2);
   setfillstyle(SOLID_FILL,YELLOW);
   fillellipse(x,y,35,35);
   for (int i=0; i<10; ++i){
      line(x,y,x+60*cos(2*acos(-1)*(i/10.0+x/800.0)), y-60*sin(2*acos(-1)*(i/10.0+x/800.0)));
   }
}
