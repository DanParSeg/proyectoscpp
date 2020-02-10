#ifndef __game_h_
#define __game_h_

#include "vector2.h"

const static double TIMESTEP=0.0000001;

class body{
public:
  body();

  void setpos(vector2 vec){r=vec;}
  void setvel(vector2 vec){v=vec;}
  void setworldacc(vector2 vec){worldacc=vec;}
  void setfor(vector2 vec){f=vec;}
  void setmass(double mass){invm=1/mass;}

  vector2 getpos(){return r;}
  vector2 getvel(){return v;}
  vector2 getacc(){return a;}
  vector2 getfor(){return f;}
  double getmass(){return 1/invm;}

  void step();

  void print();

private:
  vector2 r;
  vector2 v;
  vector2 a;
  vector2 f;
  vector2 worldacc;
  double invm=1;
  double timestep=TIMESTEP;
};

#endif
