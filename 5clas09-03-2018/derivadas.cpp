#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double f(double x);
double derivaforward(double x, double h);
double derivacentral(double x, double h);
double richardsoncentral(double x, double h);
double richardsonforward (double x, double h);

int main()
{
  double x= M_PI/3;
  double h=0.1;
  double r=0;
  printf("derivada del seno de pi/3\n");
  printf("cos = %25.16e\n", cos(x));
  printf("Richardson central = %25.16e\n", richardsoncentral(x,h));
  printf("derivada central = %25.16e\n", derivacentral(x,h));
  printf("Richardson forward = %25.16e\n", richardsonforward(x,h));
  printf("derivada forward = %25.16e\n", derivaforward(x,h));

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
