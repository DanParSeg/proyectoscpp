#include <stdio.h>
#include <math.h>

#include "vector2.hpp"

int main(){
  vector2 v1(1,0);
  vector2 v2(1,1);

  (v1+v2).print();
  (v1-v2).print();
  (-v2).print();
  (3*v2).print();
  (v2*3).print();
  printf("%f\n",v1*v2);
  (v2/2).print();
  printf("%d\n",v1==v2);
  printf("%d\n",v1!=v2);
  printf("%f\n",v1.sqnorm());
  printf("%f\n",v1.norm());
  printf("%f\n",v1.angle(v2)*4);
  v2.unit().print();
  v2.perp().print();

}
