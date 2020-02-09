

class vector2{
public:
  vector2(double coorx, double coory):x(coorx), y(coory){};
  double getx(){return x;}
  double gety(){return y;}
  void setx(double coorx){x=coorx;}
  void sety(double coory){y=coory;}

  void print();

  vector2 operator + (const vector2& v) const;//v1+v2
  vector2 operator - (const vector2& v) const;//v1-v2
  vector2 operator - () const;//-v1
  friend vector2 operator * (double n, const vector2& v);//n*v1
  vector2 operator * (const double n) const;//v1*n
  vector2 operator / (const double n) const;//v1/n
  double operator * (const vector2& v) const;//v1*v2
  bool operator  == (const vector2& v) const;//v1==v2
  bool operator != (const vector2& v) const;//v1!=v2

  double sqnorm();//|v|^2
  double norm();//|v|
  double angle (vector2& v);//angulo entre 2 vectores
  vector2 unit();//v/|v|
  vector2 perp();//(-y,x)

private:
  double x;
  double y;
};

vector2 operator * (double n, const vector2& v);
