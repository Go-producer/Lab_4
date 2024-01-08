#include "graphics.h"
#include "picture.hpp"

int main()
{ initwindow(800,600);
  
   int p=0;// ������� ������� ������� �������� 0
   int x=-50;
   while(!kbhit()){
      p=1-p;
      setactivepage(p);// �������� �������� == 1-�������
      house();
      sun();
      x+=1;
      if(x>850) x=-50;
      setvisualpage(p);// ������ �������� �������� �������
      delay(10);
      
   }
   getch();
   closegraph();

}