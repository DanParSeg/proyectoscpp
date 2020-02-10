#include <stdio.h>

#include "body.h"

body::body(){

}

void body::print(){
  printf("body{\n  r=");
  r.print();
  printf("  v=");
  v.print();
  printf("  a=");
  a.print();
  printf("  f=");
  f.print();
  printf("  mass=%f\n",1/invm);
  printf("}\n");
}

void body::step(){
  a= (invm*f + worldacc);
  v= timestep*a + v;
  r= timestep*v + r;
}
