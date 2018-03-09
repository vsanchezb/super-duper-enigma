#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double f(double x);
double deriva(double x, double h);

int main()
{
  double x= M_PI/3;
  double h=0.1;
  double r=0;
  
  /*cout<<"x= \n";
  cin>>x;
  cout<<"h= \n";
  cin>>h;
  r=deriva(f(x),h);
  cout<<"sen'("<<x<<")= "<<r<< endl;*/

  printf("%25.16e\n", deriva(x,h));
  return 0;
}

double f(double x)
{
  return sin(x);
}
double deriva(double x, double h)
{
  
  return (f(x+h)-f(x))/h;
}
