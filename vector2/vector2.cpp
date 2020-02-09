#include <stdio.h>
#include <math.h>

#include "vector2.hpp"


void vector2::print(){
  printf("v2(%f,%f)\n", x, y);
}



vector2 vector2::operator + (const vector2& v) const{
    return vector2(x+v.x, y+v.y);
}
vector2 vector2::operator - (const vector2& v) const{
    return vector2(x-v.x, y-v.y);
}
vector2 vector2::operator - () const{
    return vector2(-x,-y);
}
double vector2::operator * (const vector2& v) const{//pr escalar
    return x*v.x+y*v.y;
}
vector2 vector2::operator * (const double n) const{//V*n
    return n*(*this);
}
vector2 operator * (double n, const vector2& v){//n*V
    return vector2(v.x*n,v.y*n);
}
vector2 vector2::operator / (const double n) const{
    return vector2(x/n,y/n);
}
bool vector2::operator == (const vector2& v) const{
    return x==v.x && y==v.y;
}
bool vector2::operator != (const vector2& v) const{
    return !(*this==v);
}

double vector2::sqnorm(){
    //Norma cuadrado
    return ((*this)*(*this));//producto escalar de sí mismo.
}

double vector2::norm(){
    //returns the euclidean norm (modulus)
    return sqrt((*this)*(*this));
}
vector2 vector2::unit(){
    //returns unitary vector with the same direction
    return (*this)/norm();
}

vector2 vector2::perp(){
    //returns perpendicular vector counterclockwise
    return vector2(-y,x);
}
double vector2::angle(vector2& v) {
    //returns radians
    return acos( ((*this)*v) / (norm()*v.norm()) );
}
