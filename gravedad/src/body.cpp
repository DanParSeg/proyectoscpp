#include <stdio.h>
#include "vector2.h"
#include "body.h"

const static double timestep=0.1;

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
