#include <iostream>
#include  <cmath>

using func=double(double);

double biss(double a,double b,double eps, int i, func fu);
double f(double x);
int main()
{
  std::cout.precision(16);
  double x=biss(10,20,1e-9,1000,f);
  std::cout<<x<<"\n"<<f(x)<<"\n"; 
  
}

double f(double x)
{

  return (9.81*68.1/x)*(1-std::exp(-x*10/68.1))-40;
}
 
double biss(double a,double b,double eps, int i, func fu)
{
  double x=(a+b)/2;
  int n=0;
  if (std::abs(f(x))>eps)
    {
      if (f(x)*f(a)<0)
	{
	  b=x;
	}
      if (f(x)*f(b)<0)
	{
	  a=x;
	}
      x=biss(a, b, eps, i, fu);
    }
  else    
    return x;
}
