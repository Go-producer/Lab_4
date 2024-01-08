#include "graphics.h"
#include "picture.hpp"

int main()
{ initwindow(800,600);
  
  //sun(); 
   int p=0;// сначала текущая видимая страница 0
   int x=-50;
   while(!kbhit()){
      p=1-p;
      setactivepage(p);// активная страница == 1-видимая
      house();
      x+=1;
      if(x>850) x=-50;
      setvisualpage(p);// делаем активную страницу видимой
      delay(10);
      
   }
   getch();
   closegraph();

}