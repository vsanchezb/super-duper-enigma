#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double err(double x1,double x2);
double f(double x);
double derivaforward(double x, double h);
double derivacentral(double x, double h);
double richardsoncentral(double x, double h);
double richardsonforward(double x, double h);
double ferror(double x, double h);

int main()
{
  double x= M_PI/3;
  double h=0.01;
  double r=0;

  while(h<1)
    {
      
      cout<<h<<"\t"<<ferror(x,h) <<endl;
      h=h+0.01;      
    }
  
  return 0;
}

double f(double x)
{
  return sin(x);
}
double derivacentral(double x, double h)
{
  
  return (f(x+(h/2))-f(x-(h/2)))/h;
}
double derivaforward(double x, double h)
{
  
  return (f(x+h)-f(x))/h;
}
double richardsoncentral(double x, double h)
{
  double h2=h/2;
  double r1=derivacentral(x,h);
  double r2=derivacentral(x,h2);
  double r=(4*r2-r1)/3;
  return r;
}

double richardsonforward (double x, double h)
{
  double h2=h/2;
  double r1=derivaforward(x,h);
  double r2=derivaforward(x,h2);
  double r=(4*r2-r1)/3;
  return r;
}
double ferror(double x, double h)
{
  double er=abs(1-(richardsoncentral(x,h)/cos(x)));
  return er;
}
