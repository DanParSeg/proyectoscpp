#include <stdio.h>
#include <unistd.h>

#include "body.h"


int main(){
  body b;
  b.setworldacc(vector2(0,-9.81));
  b.setpos(vector2(0,500));
  b.print();
  while(b.getpos().gety()>0){
    //printf("\033c");
    b.step();

    //usleep(10);

  }
  b.print();

}
