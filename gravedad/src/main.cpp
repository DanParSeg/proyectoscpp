#include <stdio.h>
#include <unistd.h>

#include "vector2.h"

#include "SFML/Graphics.hpp"
#include "body.h"


int main(){
  body b;
  sf::RenderWindow window(sf::VideoMode(640,480), "SFML window");
  sf::CircleShape shape(10.f);
  shape.setFillColor(sf::Color::Green);

  b.setworldacc(vector2(0,9.8));
  b.setvel(vector2(40,0));
  b.setpos(vector2(100,0));

  while (window.isOpen())
  {
      sf::Event event;
      while (window.pollEvent(event))
      {
          if (event.type == sf::Event::Closed)
              window.close();
      }
      for(int i=0; i<10000; i++) b.step();
      if(b.getpos().gety()>=460) b.setvel(vector2(b.getvel().getx(),-b.getvel().gety()));
      if(b.getpos().getx()<=0 || b.getpos().getx()>=620) b.setvel(vector2(-b.getvel().getx(),b.getvel().gety()));
      b.print();
      shape.setPosition(b.getpos().getx(), b.getpos().gety());
      window.clear();
      window.draw(shape);
      window.display();
  }
}
