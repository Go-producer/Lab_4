#include "graphics.h"
#include <math.h>
#include "picture.hpp"
void house(){
   
   setcolor(GREEN);
   setfillstyle(SOLID_FILL,GREEN);
   int p[6]={100,300,200,200,300,300};
   fillpoly(3,p);
   setcolor(RED);
   setfillstyle(SOLID_FILL,RED);
   bar(100,300,300,450);
   
}