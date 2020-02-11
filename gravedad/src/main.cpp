#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "vector2.h"

#include "SFML/Graphics.hpp"
#include "body.h"


int main(){
  srand (time(NULL));
  const int n=15000;
  body b[n];
  sf::CircleShape shape[n];

  sf::RenderWindow window(sf::VideoMode(640,480), "SFML window");

  for(int i=0; i<n; i++){
    b[i].setworldacc(vector2(0,9.8));
    b[i].setvel(vector2(rand()%100-50,rand()%100-50));
    b[i].setpos(vector2(rand()%320+160,rand()%200+100));
    shape[i].setRadius(1);
    shape[i].setFillColor(sf::Color(rand()%200+55,rand()%200+55,rand()%200+55));
  }
  while (window.isOpen())
  {
      sf::Event event;
      while (window.pollEvent(event))
      {
          if (event.type == sf::Event::Closed)
              window.close();
      }
      window.clear();
      for(int i=0; i<n; i++){
        b[i].step();
        if(b[i].getpos().gety()>=480) b[i].setvel(vector2(b[i].getvel().getx(),-b[i].getvel().gety()));
        if(b[i].getpos().getx()<=0 || b[i].getpos().getx()>=640) b[i].setvel(vector2(-b[i].getvel().getx(),b[i].getvel().gety()));
        shape[i].setPosition(b[i].getpos().getx(), b[i].getpos().gety());
        window.draw(shape[i]);
      }
      window.display();
  }
}
