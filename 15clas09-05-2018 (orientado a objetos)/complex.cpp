#include <iostream>
#include<cmath>

struct Complex
{
  double a, b;
  void Print(void);
  double norma(Complex &z);
  double angulo(Complex &z);
  Complex operator+ (Complex & rhs);//rhs es una convencion para right hand side
  void Printall(Complex &z); 
};


int main ()
{
  Complex x,y,z;
  x.a= 3;
  x.b= 4.789;
  y.a= -2;
  y.b= -3.789;
  z=x+y;
  x.Print();
  y.Print();
  z.Printall();
  
  
  return 0;
}

Complex Complex::operator+ (Complex & rhs)//rhs es una convencion para right hand side
{
  Complex tmp;
  tmp.a= a + rhs.a;
  tmp.b= b + rhs.b;
  return tmp;
}

double Complex::angulo(Complex &z)
{
  return atan2(z.a,z.b);
}

double Complex::norma(Complex &z)
{
  return hypot(z.a,z.b);
}

void Complex::Print(void)
{
  
  std::cout<< "("<< a << " , " << b <<")"<<std::endl;
}
void Complex::Printall(Complex &z)
{
  z.Print();
  std::cout<<"Norma = "<< z.norma <<
}
