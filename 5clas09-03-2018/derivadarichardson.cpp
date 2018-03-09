#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double f(double x);
double derivaforward(double x, double h);
double derivacentral(double x, double h);
double richardsoncentral(double x, double h);

int main()
{
  double x= M_PI/3;
  double h=0.1;
  double r=0;
  printf("derivada del seno el pi/3\n");
  printf("cos = %25.16e\n", cos(x));
  printf("derivada central = %25.16e\n", derivacentral(x,h));
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
